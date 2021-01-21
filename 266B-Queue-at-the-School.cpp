#include <bits/stdc++.h>
using namespace std;

void arrangment(int n, int t, char q[])
{
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((q[j] == 'B') && (q[j + 1] == 'G'))
            {
                char temp = q[j];
                q[j] = q[j + 1];
                q[j + 1] = temp;
                j++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << q[i];
    }
}

int main()
{
    int n, t;
    cin >> n >> t;
    char q[n];
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }
    arrangment(n, t, q);
    return 0;
}