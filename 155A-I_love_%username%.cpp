#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int contests[n];
    for (int i = 0; i < n; i++)
    {
        cin >> contests[i];
    }
    int max = contests[0], min = contests[0];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (max < contests[i])
        {
            max = contests[i];
            count++;
        }
        if (min > contests[i])
        {
            min = contests[i];
            count++;
        }
    }
    cout << count;

    return 0;
}