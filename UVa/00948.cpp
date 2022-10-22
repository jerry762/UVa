#include <iostream>
#include <algorithm>

#define SIZE 40

using namespace std;

int main()
{
    int n = 0;
    int num = 0;
    int fib[SIZE] = {0, 1};

    cin >> n;

    for (int i = 2; i < SIZE; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        cin >> num;

        cout << num << " = ";

        for (int j = SIZE - 1; j >= 2; j--)
        {
            if (num >= fib[j])
            {
                num -= fib[j];
                cout << '1';
                flag = true;
            }
            else if (flag)
                cout << '0';
        }

        cout << " (fib)" << endl;
    }

    return 0;
}
