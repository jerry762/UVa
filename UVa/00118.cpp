#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<pair<int, int>> record;
    pair<int, int> up_right;
    pair<int, int> robotPos;
    string ins;
    char orientation[4] = {'W', 'N', 'E', 'S'};
    char robotOrientation;
    int robotOrientationC;

    cin >> up_right.first >> up_right.second;

    while (cin >> robotPos.first >> robotPos.second >> robotOrientation)
    {
        bool flag = false;

        for (size_t i = 0; i < 4; i++)
        {
            if (robotOrientation == orientation[i])
            {
                robotOrientationC = i;
                break;
            }
        }

        cin >> ins;

        for (size_t i = 0; i < ins.size(); i++)
        {
            if (ins.at(i) == 'R')
            {
                if (robotOrientationC == 3)
                    robotOrientationC = 0;
                else
                    robotOrientationC++;
            }
            else if (ins.at(i) == 'L')
            {
                if (robotOrientationC == 0)
                    robotOrientationC = 3;
                else
                    robotOrientationC--;
            }
            else
            {
                switch (orientation[robotOrientationC])
                {
                case 'E':
                    robotPos.first++;
                    break;
                case 'W':
                    robotPos.first--;
                    break;
                case 'S':
                    robotPos.second--;
                    break;
                case 'N':
                    robotPos.second++;
                    break;
                }
            }

            if (robotPos.first > up_right.first)
            {
                robotPos.first--;
                flag = true;
                for (size_t i = 0; i < record.size(); i++)
                {
                    if (record[i].first == robotPos.first && record[i].second == robotPos.second)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    record.push_back(robotPos);
                    break;
                }
            }
            if (robotPos.first < 0)
            {
                robotPos.first++;
                flag = true;
                for (size_t i = 0; i < record.size(); i++)
                {
                    if (record[i].first == robotPos.first && record[i].second == robotPos.second)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    record.push_back(robotPos);
                    break;
                }
            }
            if (robotPos.second > up_right.second)
            {
                robotPos.second--;
                flag = true;
                for (size_t i = 0; i < record.size(); i++)
                {
                    if (record[i].first == robotPos.first && record[i].second == robotPos.second)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    record.push_back(robotPos);
                    break;
                }
            }
            if (robotPos.second < 0)
            {
                robotPos.second++;
                flag = true;
                for (size_t i = 0; i < record.size(); i++)
                {
                    if (record[i].first == robotPos.first && record[i].second == robotPos.second)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    record.push_back(robotPos);
                    break;
                }
            }
        }

        if (flag)
            cout << robotPos.first << " " << robotPos.second << " " << orientation[robotOrientationC] << " LOST" << endl;
        else
            cout << robotPos.first << " " << robotPos.second << " " << orientation[robotOrientationC] << endl;
    }

    return 0;
}