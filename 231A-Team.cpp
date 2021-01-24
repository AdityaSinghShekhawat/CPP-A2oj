#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int sol[t][3];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> sol[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < t; i++)
    {
        if (sol[i][0] + sol[i][1] + sol[i][2] >= 2)
            count++;
    }
    cout << count;
    return 0;
}