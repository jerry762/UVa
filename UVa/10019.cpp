#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int num = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        int dec = num, count1 = 0;
        int hex = num, count2 = 0;

        while (dec / 2)
        {
            if (dec % 2)
                count1++;
            dec /= 2;
        }
        if (dec == 1)
            count1++;

        while (hex / 10)
        {
            dec = hex % 10;

            while (dec / 2)
            {
                if (dec % 2)
                    count2++;
                dec /= 2;
            }
            if (dec == 1)
                count2++;

            hex /= 10;
        }
        while (hex / 2)
        {
            if (hex % 2)
                count2++;
            hex /= 2;
        }
        if (hex == 1)
            count2++;

        cout << count1 << ' ' << count2 << endl;
    }

    return 0;
}
