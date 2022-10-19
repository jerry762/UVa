#include <algorithm>
#include <iostream>

using namespace std;

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return (a % b == a) ? GCD(b, a) : GCD(b, a % b);
}

int main()
{
    int N;

    while (cin >> N)
    {
        int G = 0;

        if (N == 0)
            break;

        for (int i = 1; i < N; i++)
        {
            for (int j = i + 1; j <= N; j++)
            {
                G += GCD(i, j);
            }
        }
        cout << G << endl;
    }

    return 0;
}
