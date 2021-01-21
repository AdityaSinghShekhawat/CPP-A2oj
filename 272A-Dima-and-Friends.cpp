#include <bits/stdc++.h>
using namespace std;

void ways(int f, int fingures[])
{
    int sum = 0, count = 0;
    for (int i = 0; i < f; i++)
    {
        sum += fingures[i];
    }
    for (int i = 1; i <= 5; i++)
    {
        if (((sum + i) % (f + 1)) == 1)
        {
            count++;
        }
    }
    cout << (5 - count);
}

int main()
{
    int f;
    cin >> f;
    int fingures[f];
    for (int i = 0; i < f; i++)
    {
        cin >> fingures[i];
    }
    ways(f, fingures);
    return 0;
}