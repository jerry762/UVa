#include <algorithm>
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

void func(int num);

int main()
{
    string str;
    int i = 1;

    while (cin >> str)
    {
        cout << setw(4) << i << ". ";
        if (str.size() > 7)
        {
            reverse(str.begin(), str.end());
            string temp;
            temp = str.substr(7, str.size() - 7);
            reverse(temp.begin(), temp.end());
            func(stoi(temp));
            cout << " kuti";
            temp = str.substr(0, 7);
            if (stoi(temp))
            {
                cout << " ";
                reverse(temp.begin(), temp.end());
                func(stoi(temp));
            }
            cout << endl;
        }
        else
        {
            if (str == "0")
                cout << "0" << endl;
            else
            {
                func(stoi(str));
                cout << endl;
            }
        }
        i++;
    }
    return 0;
}
void func(int num)
{
    if (num >= 10000000)
    {
        cout << num / 10000000 << " kuti";
        num %= 10000000;
        if (num)
            cout << " ";
    }
    if (num >= 100000)
    {
        cout << num / 100000 << " lakh";
        num %= 100000;
        if (num)
            cout << " ";
    }
    if (num >= 1000)
    {
        cout << num / 1000 << " hajar";
        num %= 1000;
        if (num)
            cout << " ";
    }
    if (num >= 100)
    {
        cout << num / 100 << " shata";
        num %= 100;
        if (num)
            cout << " ";
    }
    if (num)
        cout << num;
}