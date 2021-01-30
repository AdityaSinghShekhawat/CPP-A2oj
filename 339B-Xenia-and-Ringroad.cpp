#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int work[m + 1];
    work[0] = 1;
    for (long long int i = 1; i < m + 1; i++)
        cin >> work[i];
    long long int count = 0;
    for (int i = 0; i < m; i++)
    {
        if (work[i] <= work[i + 1])
        {
            count += work[i + 1] - work[i];
        }
        else
        {
            count += n + work[i + 1] - work[i];
        }
    }
    cout << count;

    return 0;
}