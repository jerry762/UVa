#include <iostream>
#include <map>
#include <string>
#include <iterator>

using namespace std;

int main()
{
    map<string, int> m;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string cn, temp;

        cin >> cn;
        getline(cin, temp);

        m[cn]++;
    }

    for (const auto i : m)
        cout << i.first << " " << i.second << endl;

    return 0;
}
