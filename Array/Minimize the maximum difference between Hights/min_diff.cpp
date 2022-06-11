// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr + n);
	int minval, maxval,temp;
	minval = arr[0];
	maxval = arr[n - 1];
    temp = maxval - minval;

	for (int i = 1; i < n; i++) {
		if(arr[i] - k >= 0) {
            minval= min(arr[0] + k,arr[i] - k);								
		    maxval = max(arr[i - 1] + k, arr[n - 1] - k); 		
		    temp = min(temp, maxval - minval);
        }
	}
	return temp;
        
    
       
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends