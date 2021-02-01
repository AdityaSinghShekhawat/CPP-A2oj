#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, count = 0, total = 0;
    cin >> k;
    int a[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
        total += a[i];
    }
    if (total < k)
    {
        cout << -1;
    }
    else
    {
        sort(a, a + 12, greater<int>());
        while (k > 0)
        {
            k -= a[count];
            count++;
        }

        cout << count;
    }

    return 0;
}