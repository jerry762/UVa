#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

bool mySort(const pair<char, int> &a, const pair<char, int> &b);

int main()
{
    string str;
    bool flag = false;
    map<char, int> map;
    vector<pair<char, int>> vec;

    while (getline(cin, str))
    {
        if (flag)
            cout << endl;

        for (int i = 0; i < str.size(); i++)
            map[str.at(i)]++;

        for (auto &i : map)
            vec.push_back(make_pair(i.first, i.second));

        sort(vec.begin(), vec.end(), mySort);

        for (auto &i : vec)
            cout << i.first - '\0' << " " << i.second << endl;

        flag = true;

        vec.clear();
        map.clear();
    }

    return 0;
}

bool mySort(const pair<char, int> &a, const pair<char, int> &b)
{
    if (a.second < b.second)
        return true;
    else if (a.second == b.second)
        return a.first > b.first;
    return false;
}