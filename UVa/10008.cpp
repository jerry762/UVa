#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <set>
#include <functional>
#include <vector>

using namespace std;

int main()
{
    int n;
    map<char, int> map;
    set<int> set;
    vector<int> vec;

    cin >> n;

    getchar();

    for (int i = 0; i < n; i++)
    {
        string str;

        getline(cin, str);

        for (int j = 0; j < str.size(); j++)
        {
            if ((str.at(j) >= 'a' && str.at(j) <= 'z') ||
                (str.at(j) >= 'A' && str.at(j) <= 'Z'))
            {
                map[toupper(str.at(j))]++;
            }
        }
    }
    for (const auto &i : map)
        set.insert(i.second);

    vec.assign(set.begin(), set.end());

    sort(vec.begin(), vec.end(), greater<int>());

    for (const auto &i : vec)
        for (const auto &j : map)
            if (i == j.second)
                cout << j.first << " " << j.second << endl;

    return 0;
}