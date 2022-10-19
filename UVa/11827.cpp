#include <algorithm>
#include <iostream>
#include <vector>
#include <sstream>

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

    cin >> N;
    getchar();

    while (N--)
    {
        vector<int> list;
        int maxGCD = 0, x;

        string s;

        getline(cin, s);

        stringstream ss(s);

        while (ss >> x)
            list.push_back(x);

        for (int i = 0; i < list.size() - 1; i++)
        {
            for (int j = i + 1; j < list.size(); j++)
            {
                maxGCD = max(maxGCD, GCD(list.at(i), list.at(j)));
            }
        }
        cout << maxGCD << endl;
    }
    return 0;
}
