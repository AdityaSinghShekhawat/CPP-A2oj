#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cities[n], dup[n];
    for (int i = 0; i < n; i++)
    {
        cin >> cities[i];
    }
    for (int i = 0; i < n; i++)
    {
        dup[i] = cities[i];
    }
    sort(cities, cities + n);
    if (cities[0] == cities[1])
        cout << "Still Rozdil";
    else
    {
        int find = cities[0], index;
        for (int i = 0; i < n; i++)
        {
            if (find == dup[i])
                index = i;
        }
        cout << index + 1;
    }
    return 0;
}