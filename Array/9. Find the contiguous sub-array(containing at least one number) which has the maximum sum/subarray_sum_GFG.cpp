// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
   
    maxSum(int a[], int n){
        int current_max=a[0],final_max=a[0];

        for(int i=1;i<n;i++){
            current_max=max(a[i],a[i]+current_max);
            final_max=max(current_max,final_max);
        }
        return final_max;
       
    }
};


int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSum(a, n) << endl;
    }
}