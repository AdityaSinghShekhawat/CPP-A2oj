#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int alpha[130];
    for (int i = 0; i < 130; i++)
    {
        alpha[i] = 0;
    }

    for (int i = 0; i < str.length(); i++)
    {
        alpha[str[i]] = 1;
    }
    if (alpha[72] == 1 || alpha[81] == 1 || alpha[57] == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}