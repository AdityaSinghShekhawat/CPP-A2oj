#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    while (str.find("WUB") != string::npos)
    {
        str.replace(str.find("WUB"), 3, " ");
    }
    cout << str;
    return 0;
}