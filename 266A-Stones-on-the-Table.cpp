#include <bits/stdc++.h>
using namespace std;

int count_stones(int n, string stones)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (stones[i] == stones[i + 1])
            count++;
    return count;
}

int main()
{
    int n;
    cin >> n;
    string stones;
    cin >> stones;
    cout << count_stones(n, stones);
    return 0;
}