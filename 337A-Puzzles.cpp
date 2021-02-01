#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int puzzel[m];
    for (int i = 0; i < m; i++)
    {
        cin >> puzzel[i];
    }
    sort(puzzel, puzzel + m);
    int least = puzzel[n - 1] - puzzel[0];
    for (int i = 1; i <= m - n; i++)
    {
        if (least > puzzel[i + n - 1] - puzzel[i])
        {
            least = puzzel[i + n - 1] - puzzel[i];
        }
    }
    cout << least;
    return 0;
}