#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int temp = 0, temp2 = 0, temp3 = 0;
    int a[] = {-1, -2, 3, -4, 8, -9, 12, 3}, sum, prev_sum;

    for (int i = 0; i < 7; i++)
    {
        sum = a[i];
        for (int j = i + 1; j < 8; j++)
        {
            prev_sum = sum;
            sum += a[j];

            if (sum < prev_sum)
                temp = prev_sum;
            else
            {
                temp = sum;
            }

            if (temp > temp2)
                temp2 = temp;
        }
        cout<< temp2 << endl;
    }
}
