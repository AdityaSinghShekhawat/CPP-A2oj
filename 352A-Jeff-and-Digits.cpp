#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[n];
    int count_0 = 0, count_5 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        if (num[i] == 0)
        {
            count_0++;
        }
        if (num[i] == 5)
        {
            count_5++;
        }
    }
    if (count_0 == 0)
    {
        cout << "-1";
    }
    else
    {
        while (count_5 % 9 != 0)
            count_5--;
        int value[count_5 + count_0];
        if (count_5 == 0)
        {
            cout << "0";
        }

        else
        {
            for (int i = 0; i < count_5; i++)
            {
                value[i] = 5;
            }
            for (int i = count_5; i < count_5 + count_0; i++)
            {
                value[i] = 0;
            }
            for (int i = 0; i < count_5 + count_0; i++)
            {
                cout << value[i];
            }
        }
    }

    return 0;
}