#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool flag = true;
    string tex;

    while (getline(cin, tex))
    {
        for (int i = 0; i < tex.size(); i++)
        {
            if (tex.at(i) == '\"')
            {
                if (flag)
                    tex.replace(i, 1, "``");
                else
                    tex.replace(i, 1, "\'\'");
                flag = !flag;
            }
        }
        cout << tex << endl;
    }
}