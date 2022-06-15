// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string st) {
	    int k=0;
	   string G;
        int len=st.length();
       int arr[200];
       for(int i=0;i<200;i++)
        arr[i]=0;

       for(int i=0;i<len;i++){
            char ch=st[i];
            int d=ch;
            if(arr[d]!=1)
            {
                arr[d]=1;
                G.push_back(st[i]);
            }
       }

       return G;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends