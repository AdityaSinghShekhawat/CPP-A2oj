#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    char c = '.';

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = 'a' - 'A' + str[i];
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != 'a' && str[i] != 'o' && str[i] != 'y' && str[i] != 'e' && str[i] != 'u' && str[i] != 'i')
        {
            printf(".%c", str[i]);
        }
    }

    return 0;
}