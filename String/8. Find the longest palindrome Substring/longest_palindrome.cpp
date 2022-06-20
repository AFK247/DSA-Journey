#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string S)
{
	   long long int i,j;
      int n=S.size();
      
      for (i = 0, j = n - 1; i < n / 2, j >= n / 2; i++, j--)
      {
         if(S[i]!=S[j]){
            return 0;
         }
      } 
      return n;
}

string longPalindrome(string S){
            
            long long int len=S.length(),maxi=-99;
            string sub , ans;
            if(len==1)
            return S;

            for(long long int i=0;i<len-1;i++){
                for(long long int j=i;j<len;j++){
                    sub = S.substr(i,j-i+1);
                    //cout<<sub<<" "<<i<<" "<<j<<endl;
                    int size=isPalindrome(sub);

                    if(size>maxi && size!=0){
                        maxi = size;
                        ans=sub;
                    }

            }
            //cout<<"First i shash "<<endl;
            }
            
            return ans;

}


int main() 
{
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		cout << longPalindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends