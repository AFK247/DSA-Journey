#include <bits/stdc++.h>
using namespace std;

int min_jump(int arr[], int n) {
        int i=0,jump=0;
        while(i<n){
            i=i+arr[i];
            jump++;
            if(i>=n-1)
            break;
        }
        return jump;
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
        
        int ans =min_jump(arr, n);
        cout << ans << "\n";
    }
    return 0;
}