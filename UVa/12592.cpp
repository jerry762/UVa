#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    unordered_map<string, string> unmap;
    int N, Q;

    cin >> N;
    getchar();

    for (int i = 0; i < N; i++)
    {
        string l, r;
        getline(cin, l);
        getline(cin, r);
        unmap.insert(make_pair(l, r));
    }

    cin >> Q;
    getchar();

    for (int i = 0; i < Q; i++)
    {
        string r;
        getline(cin, r);
        cout << unmap[r] << endl;
    }
    return 0;
}
