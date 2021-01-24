#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int limit = s.length() / 2 + 1;
    char a[limit];
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            a[j] = s[i];
            j++;
        }
    }
    sort(a, a + j);
    for (int i = 0; i < limit - 1; i++)
    {
        cout << a[i] << "+";
    }
    cout << a[limit - 1];
    return 0;
}