#include <bits/stdc++.h>
using namespace std;

int main()
{
    float f1, f2, f3;
    cin >> f1 >> f2 >> f3;
    float ans;
    ans = 4 * (sqrt((f1 * f3) / f2) + sqrt((f1 * f2) / f3) + sqrt((f2 * f3) / f1));
    cout << ans;
    return 0;
}