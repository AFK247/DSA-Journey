// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int i, j,current_max=0,final_max=0,final_row;
        for (i = 0; i < n; i++)
        {
            current_max=0;
            for (j = 0; j < m; j++){
               if(arr[i][j]==1)
               current_max++;
            }
            if(current_max>final_max){
                final_max=current_max;
                final_row=i;
            }
               
        }
        if(final_max==0)
           return -1;
        return final_row;
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends