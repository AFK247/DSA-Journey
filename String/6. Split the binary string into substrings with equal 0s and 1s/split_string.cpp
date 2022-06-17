// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        int temp=0,count=0,len=str.length();
        for(int i=0;i<len;i++){
            if(str[i]=='0')
             temp++;
             else temp--;

             if(temp==0)
             count++;
        }
        if(temp==0)
        return count;
        else return -1;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends