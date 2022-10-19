#include <iostream>

using namespace std;

int main()
{

    long int h, o;

    while (cin >> h >> o)
    {
        cout << abs(o - h) << endl;
    }

    return 0;
}