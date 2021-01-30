#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a = 0, b = 1, c = 0, x, y;
    cin >> n;
    if (n == 0)
        cout << "0 0 0";
    else
    {
        while (c != n)
        {
            c = a + b;
            x = a;
            y = b;
            a = b;
            b = c;
        }
        cout << "0 " << x << " " << y;
    }

    return 0;
}