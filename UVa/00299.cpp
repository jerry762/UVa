#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
    int carr[50] = {0};
    int len = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        cin >> len;

        for (int j = 0; j < len; j++)
        {
            cin >> carr[j];
        }

        for (int j = 0; j < len - 1; j++)
        {
            bool flag = true;

            for (int k = 0; k < len - 1 - j; k++)
            {
                if (carr[k] > carr[k + 1])
                {
                    swap(carr[k], carr[k + 1]);
                    count++;
                    flag = false;
                }
            }
            if (flag)
                break;
        }
        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }

    return 0;
}