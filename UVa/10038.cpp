#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
    vector<int> num_seq;
    vector<int> check_seq;

    while (cin >> n)
    {
        bool flag = true;
        int num = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> num;
            num_seq.push_back(num);
        }

        for (int i = 0; i < num_seq.size() - 1; i++)
            check_seq.push_back(abs(num_seq.at(i) - num_seq.at(i + 1)));

        sort(check_seq.begin(), check_seq.end());

        for (int i = 0; i < check_seq.size(); i++)
        {
            if (check_seq.at(i) != i + 1)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;

        check_seq.clear();
        num_seq.clear();
    }

    return 0;
}