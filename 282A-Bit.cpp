#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    char a[t][3];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    int x = 0;
    for (int i = 0; i < t; i++)
    {
        if (a[i][1] == '+')
            x++;
        if (a[i][1] == '-')
            x--;
    }
    cout << x;
    return 0;
}