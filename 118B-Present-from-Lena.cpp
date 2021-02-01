#include <bits/stdc++.h>
using namespace std;
void print_space(int i, int n)
{
    int space = 2 * (n - i);
    for (int q = 0; q < space; q++)
    {
        cout << " ";
    }
}
void print_pattern(int i, int n)
{
    if (i == 0)
    {
        cout << i;
    }
    else
    {
        for (int q = 0; q < i + 1; q++)
        {
            cout << q << " ";
        }
    }
}
void print_reverse(int i, int n)
{
    for (int q = i - 1; q >= 0; q--)
    {
        if (q == 0)
        {
            cout << q;
        }
        else
        {
            cout << q << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n + 1; i++)
    {
        print_space(i, n);
        print_pattern(i, n);
        print_reverse(i, n);
        cout << "\n";
    }
    for (int i = n - 1; i >= 0; i--)
    {
        print_space(i, n);
        print_pattern(i, n);
        print_reverse(i, n);
        cout << "\n";
    }
    return 0;
}