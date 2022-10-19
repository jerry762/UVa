#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int f(string n)
{

    if (n.size() == 1)
        return stoi(n);

    int sum = 0;

    for (const char i : n)
        sum += (i - '0');

    return f(to_string(sum));
}

int main()
{
    string n;

    while (cin >> n)
    {
        if (stoi(n) == 0)
            break;

        cout << f(n) << endl;
    }

    return 0;
}
