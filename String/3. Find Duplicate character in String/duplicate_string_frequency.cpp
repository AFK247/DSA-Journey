#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	
	
void duplicate(string S)
	{
	   map<char,int> M;

       for(int i=0;i<S.length();i++){
            M[S[i]]++;
       }
       for(auto itr:M)
       cout<<itr.first<<" "<<itr.second<<endl; 
       
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	
   		string s="olaolop";

   	    Solution ob;

   		 ob.duplicate(s);
   

    return 0;
}  // } Driver Code Ends