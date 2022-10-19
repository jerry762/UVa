#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int l, r;

    while (cin >> l >> r)
    {
        int maxLen = 0, minNum = min(l, r), maxNum = max(l, r);

        for (int i = minNum; i <= maxNum; i++)
        {
            int count = 1, n = i;

            while (n != 1)
            {
                if (n % 2 == 1)
                    n = 3 * n + 1;
                else
                    n /= 2;
                count++;
            }
            maxLen = max(maxLen, count);
        }
        cout << l << " " << r << " " << maxLen << endl;
    }

    return 0;
}