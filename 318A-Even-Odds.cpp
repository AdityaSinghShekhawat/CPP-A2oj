#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k, mid;
    cin >> n >> k;
    mid = n / 2;
    if (n % 2 == 0)
    {
        if (k <= mid)
        {
            cout << 2 * k - 1;
        }
        else
        {
            k = k - mid;
            cout << 2 * k;
        }
    }
    else
    {
        if (k <= mid + 1)
        {
            cout << 2 * k - 1;
        }
        else
        {
            k = k - mid - 1;
            cout << 2 * k;
        }
    }

    return 0;
}