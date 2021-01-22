#include <bits/stdc++.h>
using namespace std;

void beautiful_year(int year)
{
    year++;
    int temp[4];
    int num = year;
    for (int i = 3; i >= 0; --i)
    {
        temp[i] = year % 10;
        year = year / 10;
    }
    while (!((temp[0] != temp[1]) && (temp[0] != temp[2]) && (temp[0] != temp[3]) && (temp[1] != temp[2]) && (temp[1] != temp[3]) && (temp[2] != temp[3])))
    {
        num++;
        int temp_num = num;
        for (int i = 3; i >= 0; --i)
        {
            temp[i] = temp_num % 10;
            temp_num = temp_num / 10;
        }
    }
    cout << num;
}

int main()
{
    int t;
    cin >> t;
    beautiful_year(t);
    return 0;
}