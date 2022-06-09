#include <bits/stdc++.h>
using namespace std;

struct Pair
{
    int max;
    int min;
};

struct Pair maxmin(int arr[], int n)
{
    struct Pair num;
    int i;
    if (n % 2 == 0)
    { // even number of elements
        if (arr[0] > arr[1])
        {
            num.max = arr[0];
            num.min = arr[1];
        }
        else
        {
            num.max = arr[1];
            num.min = arr[0];
        }
        i = 2;
    }
    else
    { // odd no of Elements
        num.max = arr[0];
        num.min = arr[0];
        i = 1;
    }

    for(;i<n-1;i=i+2)
    {

        if (arr[i] > arr[i + 1])
        {
            if (arr[i] > num.max)
                num.max = arr[i];
            if (arr[i+1] < num.min)
                num.min = arr[i+1];
        }
        else{
            if (arr[i+1] > num.max)
                num.max = arr[i+1];
            if (arr[i] < num.min)
                num.min = arr[i];
        }
    }
    return num;
}

int main()
{
    int n, i;
    
    cout << "Enter the no of elements";
    cin >> n;

    int arr[n];
    
    for (i = 0; i < n; i++)
        cin >> arr[i];

    Pair num = maxmin(arr, n);

    cout <<"Min Number: "<< num.min << " Max Number: " << num.max;

    return 0;
}