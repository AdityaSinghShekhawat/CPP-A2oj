#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count = 0;
    bool dec = false;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
            if (count >= 6)
            {
                dec = true;
            }
        }
        if (str[i] != str[i + 1])
        {
            count = 0;
        }
    }
    if (str[str.length() - 2] == str[str.length() - 1])
    {
        count++;
        if (count >= 6)
        {
            dec = true;
        }
    }
    if (str[str.length() - 2] != str[str.length() - 1])
    {
        count = 0;
    }
    if (dec)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}