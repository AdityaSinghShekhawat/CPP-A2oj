#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t[4], count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> t[i];
    }
    sort(t, t + 4);
    for (int i = 0; i < 3; i++)
    {
        if (t[i] == t[i + 1])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}