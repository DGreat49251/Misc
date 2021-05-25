#include <bits/stdc++.h>
using namespace std;
void chaos(long long int q, long long int d)
{
    long long int left_x = (-1ll) * 1e18, right_x = 1e18, left_y = left_x, right_y = right_x;
    left_x--;
    right_x++;
    left_y--;
    right_y++;
    long long int curpos = 1;
    string command;
    long long int z = 1;
    while (true)
    {
        if (curpos == 1)
        {
            if (right_x >= (left_x + 2) && right_y >= (left_y + 2))
            {
                long long int midx = (right_x + left_x) / 2;
                long long int midy = (right_y + left_y) / 2;
                cout << curpos << " " << midx << " " << midy << endl;
                cin >> command;
                if (command.compare("O") == 0 || command.compare("FAILED") == 0)
                    break;
                if (command[0] == 'X')
                {
                    left_x = midx - 1;
                    right_x = midx + 1;
                }
                else if (command[0] == 'P')
                {
                    if (d == 0)
                    {
                        right_x = midx - 1;
                    }
                    else
                    {
                        right_x = midx;
                        left_x--;
                    }
                }
                else
                {
                    if (d == 0)
                    {
                        left_x = midx + 1;
                    }
                    else
                    {
                        left_x = midx;
                        right_x++;
                    }
                }
                if (command[1] == 'Y')
                {
                    left_y = midy - 1;
                    right_y = midy + 1;
                }
                else if (command[1] == 'P')
                {
                    if (d == 0)
                    {
                        right_y = midy - 1;
                    }
                    else
                    {
                        right_y = midy;
                        left_y--;
                    }
                }
                else
                {
                    if (d == 0)
                    {
                        left_y = midy + 1;
                    }
                    else
                    {
                        left_y = midy;
                        right_y++;
                    }
                }
                if (d == 0)
                {
                }
                else
                {
                    if (right_x <= (left_x + 3) && right_y <= (left_y + 3))
                    {
                        curpos = 2;
                    }
                }
            }
            else
            {
                curpos = 2;
                cout << curpos << " " << left_x << " " << left_y << " " << right_x << " " << right_y << endl;
                cin >> command;
                break;
            }
        }
        else
        {
            if (right_x == (left_x + 3) && (right_y == (left_y + 3)))
            {
                cout << curpos << " " << left_x << " " << left_y << " " << left_x + 2 << " " << right_y << endl;
                cin >> command;
                if (command.compare("O") == 0)
                {
                    break;
                }
                else if (command.compare("IN") == 0)
                {
                    right_x = left_x + 2;
                }
                else
                {
                    left_x = left_x + 2;
                    right_x++;
                }
            }
            if (right_x == (left_x + 2) && (right_y == (left_y + 3)))
            {
                cout << curpos << " " << left_x << " " << left_y << " " << right_x << " " << left_y + 2 << endl;
                cin >> command;
                if (command.compare("O") == 0)
                {
                }
                else if (command.compare("IN") == 0)
                {
                    cout << curpos << " " << left_x << " " << left_y << " " << right_x << " " << left_y + 2 << endl;
                    cin >> command;
                }
                else
                {
                    cout << curpos << " " << left_x << " " << left_y + 2 << " " << right_x << " " << left_y + 4 << endl;
                    cin >> command;
                }
                break;
            }
            if ((right_x == (left_x + 3)) && ((right_y == (left_y + 2))))
            {
                cout << curpos << " " << left_x << " " << left_y << " " << left_x + 2 << " " << right_y << endl;
                cin >> command;
                if (command.compare("O") == 0)
                {
                }
                else if (command.compare("IN") == 0)
                {
                    cout << curpos << " " << left_x << " " << left_y << " " << left_x + 2 << " " << right_y << endl;
                    cin >> command;
                }
                else
                {
                    cout << curpos << " " << left_x + 2 << " " << left_y << " " << left_x + 4 << " " << right_y << endl;
                    cin >> command;
                }
                break;
            }
            else
            {
                cout << curpos << " " << left_x << " " << left_y << " " << right_x << " " << right_y << endl;
                cin >> command;
                break;
            }
        }
        cout.flush();
    }
    cout.flush();
}
int main()
{
    long long int t, qp, dp;
    cin >> t >> qp >> dp;
    while (t--)
    {
        chaos(qp,dp);
    }
}