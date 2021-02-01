#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int A, B;
    A = a + 1;
    B = n - b;
    if (A >= B)
    {
        cout << n - A + 1;
    }
    else
    {
        cout << n - B + 1;
    }
    return 0;
}