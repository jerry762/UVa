#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<pair<unsigned int, unsigned int>> vec;
    int N, i;

    while (cin >> N)
    {
        if (N == -1)
            break;
        vec.push_back(make_pair(0, 1));

        for (i = 0; i < N; i++)
            vec.push_back(make_pair(vec[i].first + vec[i].second, vec[i].first + 1));

        cout << vec[i].first << " " << vec[i].first + vec[i].second << endl;

        vec.clear();
    }

    return 0;
}
