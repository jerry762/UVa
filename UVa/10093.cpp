#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;

    while (getline(cin, input))
    {
        int max = 0;
        int sum = 0;
        int temp = 0;

        for (int i = 0; i < input.size(); i++)
        {
            if (input.at(i) >= '0' && input.at(i) <= '9')
                temp = input.at(i) - '0';
            else if (input.at(i) >= 'A' && input.at(i) <= 'Z')
                temp = input.at(i) - 'A' + 10;
            else if (input.at(i) >= 'a' && input.at(i) <= 'z')
                temp = input.at(i) - 'a' + 36;
            else
                continue;

            if (temp > max)
                max = temp;

            sum += temp;
        }
        int r = 0;

        for (r = max + 1; r < 63; r++)
        {
            if (r == 1)
            {
                r = 2;
                break;
            }
            if (sum % (r - 1) == 0)
                break;
        }

        if (r == 63)
            cout << "such number is impossible!" << endl;
        else
            cout << r << endl;
    }

    return 0;
}