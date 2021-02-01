#include <bits/stdc++.h>
using namespace std;
bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[0] < v2[0];
}
int main()
{
    int s, n;
    cin >> s >> n;
    vector<vector<int>> vec(n, vector<int>(2, 0));
    int input;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> vec[i][j];
        }
    }
    sort(vec.begin(), vec.end(), sortcol);
    bool win = false;
    for (int i = 0; i < n; i++)
    {
        if (!(s > vec[i][0]))
        {
            win = false;
            break;
        }
        else
        {
            s += vec[i][1];
            win = true;
        }
    }
    if (win)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}