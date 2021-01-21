#include <bits/stdc++.h>
const int m = 5;
const int n = 5;
using namespace std;

int check(int matrix[m][n])
{
    int x, y;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    x = abs(x - 2);
    y = abs(y - 2);
    return (x + y);
}

int main()
{
    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << check(matrix);
    return 0;
}