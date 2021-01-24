#include <bits/stdc++.h>
using namespace std;

int main()
{
    string guest, host, pile, both;
    cin >> guest >> host >> pile;
    both = guest + host;
    sort(both.begin(), both.end());
    sort(pile.begin(), pile.end());
    if (both == pile)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}