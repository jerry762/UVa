#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int r, l, i;

    while (cin >> l >> r)
    {
        int c = 0, count = 0;

        if (l == 0 && r == 0)
            break;

        string max_num, min_num;

        max_num = to_string(max(r, l));
        min_num = to_string(min(r, l));

        reverse(max_num.begin(), max_num.end());
        reverse(min_num.begin(), min_num.end());

        for (i = 0; i < min_num.size(); i++)
        {
            if ((min_num.at(i) - '0') + (max_num.at(i) - '0') + c >= 10)
            {
                c = 1;
                count++;
                continue;
            }
            c = 0;
        }

        for (i; i < max_num.size(); i++)
        {
            if (max_num.at(i) - '0' + c >= 10)
            {
                c = 1;
                count++;
                continue;
            }
            break;
        }

        if (count != 0)
        {
            if (count == 1)
                cout << count << " carry operation." << endl;
            else
                cout << count << " carry operations." << endl;
        }
        else
            cout << "No carry operation." << endl;
    }
    return 0;
}