#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int book[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> book[i];
    }
    int i = 0, count = 0;
    while (t >= 1)
    {
        t = t - book[i];
        i++;
        count++;
        if (i > 6)
            i = 0;
    }
    cout << ((count - 1) % 7) + 1;
    return 0;
}