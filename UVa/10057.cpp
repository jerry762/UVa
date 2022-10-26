#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;

    while (cin >> n)
    {
        vector<int> nums;
        int tmp = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            nums.push_back(tmp);
        }

        sort(nums.begin(), nums.end());

        int minMedian = 0;
        int maxMedian = 0;
        int possibleMedian = 0;

        if (nums.size() % 2)
        {
            maxMedian = nums.at(nums.size() / 2);
            minMedian = maxMedian;
            possibleMedian = 1;
        }
        else
        {
            maxMedian = nums.at(nums.size() / 2);
            minMedian = nums.at(nums.size() / 2 - 1);
            possibleMedian = maxMedian - minMedian + 1;
        }

        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums.at(i) == maxMedian || nums.at(i) == minMedian)
                count++;
        }

        cout << minMedian << " " << count << " " << possibleMedian << endl;
    }

    return 0;
}