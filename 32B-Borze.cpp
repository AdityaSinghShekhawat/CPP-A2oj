#include <bits/stdc++.h>
const int MAX = 200;
using namespace std;

void pattern(string str)
{
    int j;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '.')
        {
            cout << "0";
        }
        if ((str[i] == '-') && (str[i + 1] == '.'))
        {
            cout << "1";
            i++;
        }
        if ((str[i] == '-') && (str[i + 1] == '-'))
        {
            cout << "2";
            i++;
        }
        }
}

int main()
{
    string str;
    getline(cin, str);
    pattern(str);
    return 0;
}