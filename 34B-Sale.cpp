#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int tv[n];
    for (int i = 0; i < n; i++)
    {
        cin >> tv[i];
    }
    sort(tv, tv + n);
    int price = 0;
    for (int i = 0; i < m; i++)
    {
        if (tv[i] <= 0)
        {
            price += abs(tv[i]);
        }
    }
    if (price >= 0)
    {
        cout << price;
    }
    else
        cout << "0";

    return 0;
}