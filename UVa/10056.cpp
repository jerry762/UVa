#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/*
 *  N = player, R = round, p = probability, I = n-th player win
 *
 *  first round: p, (1 - p) * p, (1 - p)^2 * p, ... (1 - p)^(I - 1) * p
 *  second round: (1 - p)^(N * 1) * p, (1 - p)^(N * 1 + 1) * p, (1 - p)^(N * 1 + 2) * p, ... (1 - p)^(N * 1 + I - 1) * p
 *  .
 *  .
 *  .
 *  n round: (1 - p)^(N * (R - 1)) * p, (1 - p)^(N * (R - 1) + 1) * p, (1 - p)^(N * (R - 1) + 2) * p, ... (1 - p)^(N * (R - 1) + I - 1) * p
 *
 * (1 - p)^(I - 1) * p * (1 - p)^(N * (G - 1))
 *
 * (1 - p)^(I - 1) * p * (1 - (1 - p)^NR) / (1 - (1 - p)^N)
 *
 * (1 - p)^(I - 1) * p / (1 - (1 - p)^N)
 */

int main()
{
    int S = 0;
    int N = 0;
    double p = 0;
    int I = 0;

    cin >> S;

    for (int i = 0; i < S; i++)
    {
        cin >> N >> p >> I;

        if (p == 0)
            cout << 0.0000 << endl;
        else
            cout << fixed << setprecision(4) << pow(1 - p, I - 1) * p / (1 - pow(1 - p, N)) << endl;
    }

    return 0;
}