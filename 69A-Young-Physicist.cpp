#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n], y[n], z[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> z[i];
    }
    for (int i = 1; i < n; i++)
    {
        x[0] += x[i];
        y[0] += y[i];
        z[0] += z[i];
    }
    if ((x[0] == 0) && (y[0] == 0) && (z[0] == 0))
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
    return 0;
}