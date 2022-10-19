#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> list;

    cin >> n;

    while (n--)
    {
        int r, s, mid, sum = 0;
        cin >> r;
        for (int i = 0; i < r; i++)
        {
            cin >> s;
            list.push_back(s);
        }
        mid = list.size() / 2;
        sort(list.begin(), list.end());

        for (int i = 1; i <= (r - 1) / 2; i++)
            sum += (list.at(mid + i) - list.at(mid)) + (list.at(mid) - list.at(mid - i));
        if (r % 2 == 0)
            sum += list.at(mid) - list.at(0);
        cout << sum << endl;
        list.clear();
    }

    return 0;
}