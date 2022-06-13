#include <bits/stdc++.h>
using namespace std;

int duplicate(int arr[], int n) {
        int i;
            sort(arr,arr+n);

            for(i=0;i<n-1;i++){
                if(arr[i]==arr[i+1])
                break;
            }
            return arr[i];
    }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int ans =duplicate(arr, n);
        cout << ans << "\n";
    }
    return 0;
}