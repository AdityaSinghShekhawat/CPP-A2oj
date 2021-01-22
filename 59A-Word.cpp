#include <bits/stdc++.h>
using namespace std;

void word(string str)
{
    int count_lower = 0, count_upper = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if ((int(str[i]) >= 97) && (int(str[i]) <= 122))
        {
            count_lower++;
        }
        if ((int(str[i]) >= 65) && (int(str[i]) <= 90))
        {
            count_upper++;
        }
    }
    if (count_lower >= count_upper)
    {
        for (int i = 0; i < str.length(); i++)
        {
            str[i] = tolower(str[i]);
        }
    }
    if (count_lower < count_upper)
    {
        for (int i = 0; i < str.length(); i++)
        {
            str[i] = toupper(str[i]);
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }
}

int main()
{
    string str;
    getline(cin, str);
    word(str);

    return 0;
}