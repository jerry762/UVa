#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> vec;
    int m, n;

    while (cin >> m >> n)
    {
        if (m == 1 || m == 0 || n == 1 || n == 0)
        {
            cout << "Boring!" << endl;
            continue;
        }
        while (m % n == 0)
        {
            vec.push_back(m);
            m /= n;
        }
        if (m == 1)
        {
            for (int i : vec)
                cout << i << " ";
            cout << m << endl;
        }
        else
            cout << "Boring!" << endl;

        vec.clear();
    }

    return 0;
}
