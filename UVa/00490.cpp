#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> vec;
    string sen;
    int maxLen = 0;

    while (getline(cin, sen))
        vec.push_back(sen);

    for (const string &i : vec)
        maxLen = max((int)i.size(), maxLen);

    for (int i = 0; i < maxLen; i++)
    {
        for (int j = vec.size() - 1; j >= 0; j--)
        {
            if (i < vec[j].size())
                cout << vec[j][i];
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}