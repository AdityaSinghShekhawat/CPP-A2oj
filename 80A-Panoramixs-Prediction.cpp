#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int prime[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int p;
    for (int i = 0; i < 15; i++)
    {
        if (prime[i] == n)
        {
            p = prime[i + 1];
        }
    }
    if (m == p)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}