#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double sum = 0;
    cin >> n;
    double N = n;
    double drinks[n];
    for (int i = 0; i < n; i++)
    {
        cin >> drinks[i];
        sum += drinks[i];
    }
    cout << scientific << sum / N;

    return 0;
}