#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    bool result = true;
    cin >> s >> t;
    int x = s.length();
    for (int i = 0; i < x / 2; i++)
        swap(s[i], s[x - i - 1]);
    if (s.length() != t.length())
        result = false;
    else
        for (int i = 0; i < s.length(); i++)
            if (t[i] != s[i])
                result = false;
    result ? cout << "YES" : cout << "NO";
    return 0;
}