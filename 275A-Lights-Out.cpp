#include <bits/stdc++.h>
using namespace std;
const int M = 3;
const int N = 3;

void toggle(int input[M][N])
{
    int light[M][N], flag;
    for (int x = 0; x < M; x++)
    {
        for (int y = 0; y < N; y++)
        {
            light[x][y] = 1;
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (input[i][j] % 2 == 1)
            {
                flag = light[i][j];
                light[i][j] = 1 - flag;

                if (i != 2)
                {
                    flag = light[i + 1][j];
                    light[i + 1][j] = 1 - flag;
                }
                if (j != 2)
                {
                    flag = light[i][j + 1];
                    light[i][j + 1] = 1 - flag;
                }

                if (i != 0)
                {
                    flag = light[i - 1][j];
                    light[i - 1][j] = 1 - flag;
                }
                if (j != 0)
                {
                    flag = light[i][j - 1];
                    light[i][j - 1] = 1 - flag;
                }
            }
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << light[i][j];
        }
        cout << "\n";
    }
}

int main()
{
    int t[M][N];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> t[i][j];
        }
    }
    toggle(t);
    return 0;
}