#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count_1 = 1, count_2 = 0;
    string matches[n], other;
    cin >> matches[0];
    for (int i = 1; i < n; i++)
    {
        cin >> matches[i];
        if (matches[i] == matches[0])
            count_1++;
        else
        {
            count_2++;
            other = matches[i];
        }
    }
    if (count_1 > count_2)
        cout << matches[0];

    else
        cout << other;
    return 0;
}