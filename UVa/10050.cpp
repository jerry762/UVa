#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t = 0;
    int n = 0;
    int p = 0;
    int num = 0;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int count = 0;

        cin >> n;
        cin >> p;

        vector<vector<bool>> table(p, vector<bool>(n, false));

        for (int j = 0; j < p; j++)
        {
            cin >> num;

            for (int k = num; k <= n; k += num)
            {
                table.at(j).at(k - 1) = true;
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (j % 7 == 5 || j % 7 == 6)
                continue;

            for (int k = 0; k < p; k++)
            {
                if (table.at(k).at(j) == true)
                {
                    count++;
                    break;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
