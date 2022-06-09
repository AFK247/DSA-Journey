//Dutch National Flag Algorithm(Coloring)
#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int size)
{

    int hi = size - 1, mid = 0;
    while (mid <= hi)
    {
        if ((arr[mid]) < 0)     mid++;
        else    swap(arr[hi--], arr[mid]);
    }
}

void display(int *arr, int n)
{

    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int n, arr[] = {2, 3, 1, -3, -6, -1, 12, 5, 9, -67, 10};
    n = sizeof(arr) / sizeof(arr[0]);
    sort012(arr, n);

    display(arr, n);
    return 0;
}