#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, diff = INT32_MAX, index1, index2;
    cin >> t;
    int soldier[t];
    for (int i = 0; i < t; i++)
    {
        cin >> soldier[i];
    }
    for (int i = 0; i < t - 1; i++)
    {
        if (abs(soldier[i] - soldier[i + 1]) < diff)
        {
            diff = abs(soldier[i] - soldier[i + 1]);
            index1 = i;
            index2 = i + 1;
        }
    }
    if (abs(soldier[t - 1] - soldier[0]) < diff)
    {
        diff = abs(soldier[t - 1] - soldier[0]);
        index1 = t - 1;
        index2 = 0;
    }
    cout << index1 + 1 << " " << index2 + 1;
    return 0;
}