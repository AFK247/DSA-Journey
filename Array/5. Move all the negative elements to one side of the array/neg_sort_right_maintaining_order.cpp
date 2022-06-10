#include <bits/stdc++.h>
using namespace std;

void sort_neg(int arr[], int size)
{
    int temp1[size], temp2[size], i, j = 0, k = 0;

    for (i = 0; i < size; i++)
    {
        if (arr[i] > -1)
            temp1[j++] = arr[i];
        else
            temp2[k++] = arr[i];
    }

    for(int f=0;f<j;f++){
        arr[f]=temp1[f];
    }
    
    int l=0;
    for(int f=j;f<size;f++){
        arr[f]=temp2[l++];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort_neg(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}