#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cupboard[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> cupboard[i][j];
        }
    }
    int l_o = 0, l_c = 0, r_o = 0, r_c = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (cupboard[i][0] == 0)
            l_o++;
        else
            l_c++;
        if (cupboard[i][1] == 0)
            r_o++;
        else
            r_c++;
    }
    if (l_o > l_c)
        count += l_c;
    else
        count += l_o;
    if (r_o > r_c)
        count += r_c;
    else
        count += r_o;
    cout << count;
    return 0;
}