#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ee[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> ee[i][0];
        cin >> ee[i][1];
    }
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += -ee[i][0] + ee[i][1];
        if (count < sum)
        {
            count = sum;
        }
    }
    cout << count;
    return 0;
}