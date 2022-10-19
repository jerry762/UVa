#include <iostream>
#include <string>

using namespace std;

int main()
{
    string N;

    while (cin >> N)
    {
        int oddSum = 0, evenSum = 0;

        if (N == "0")
            break;

        int size = (N.size() % 2) ? N.size() - 1 : N.size();

        for (int i = 0; i < size; i += 2)
        {
            oddSum += N.at(i) - '0';
            evenSum += N.at(i + 1) - '0';
        }

        if (N.size() % 2)
            oddSum += N.at(N.size() - 1) - '0';

        if (abs(oddSum - evenSum) % 11)
            cout << N << " is not a multiple of 11." << endl;
        else
            cout << N << " is a multiple of 11." << endl;
    }
    return 0;
}