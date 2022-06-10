#include <bits/stdc++.h>
using namespace std;

int kth_min(int arr[], int l, int r, int k)
{
    sort(arr, arr + (r + 1));
    return arr[k - 1];
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
            cin >> a[i];

        int k;
        cin >> k;
        
        cout << kth_min(a, 0, n - 1, k) << endl;
    }

}