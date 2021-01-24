#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int limit = str.length();
    char input[limit];
    int alphabets[123];
    for (int i = 0; i < 123; i++)
    {
        alphabets[i] = 0;
    }

    for (int i = 0; i < limit; i++)
    {
        input[i] = str[i];
        alphabets[input[i]] = 1;
    }
    int count = 0;
    for (int i = 0; i < 123; i++)
    {
        if (alphabets[i] == 1)
            count++;
    }
    if (count % 2 == 1)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";

    return 0;
}