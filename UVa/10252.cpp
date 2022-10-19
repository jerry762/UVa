#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string a, b;
    vector<char> x;

    while (getline(cin, a), getline(cin, b))
    {
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < b.size(); j++)
            {
                if (a[i] == b[j])
                {
                    x.push_back(a[i]);
                    b.erase(j, 1);
                    j--;
                    break;
                }
            }
        }

        sort(x.begin(), x.end());
        for (char i : x)
            cout << i;
        cout << endl;
        x.clear();
    }

    return 0;
}