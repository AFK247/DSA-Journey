//Dutch National Flag Algorithm (Coloring)
#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int size)
{

    int lo = 0, hi = size - 1, mid = 0;
    while (mid <= hi)
    {
        switch (arr[mid])
        {
        case 0:
        {
            swap(arr[lo++], arr[mid++]);
            break;
        }
        case 1:
        {
            mid++;
            break;
        }
        case 2:
        {
            swap(arr[hi--], arr[mid]);
            break;
        }
        }
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
    int n, arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1, 2, 2, 1, 1, 2, 1, 2, 0, 1, 0};
    n = sizeof(arr) / sizeof(arr[0]);
    sort012(arr, n);

    display(arr, n);
    return 0;
}