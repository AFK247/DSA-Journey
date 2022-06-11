#include <bits/stdc++.h>
using namespace std;
class Solution{
    
    public:
    
int removeDuplicates(int arr[], int n)
{
    if (n==0 || n==1)
        return n;

    int j = 0;

    for (int i=0; i < n-1; i++)
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];
 
    arr[j++] = arr[n-1];
 
    return j;
} 
    vector<int> findUnion(int a[], int b[], int n, int m)
    {
        int x=removeDuplicates(a,n);
        n=x;
        int c=removeDuplicates(b,m);
        m=c;
        
       vector<int> vec;
    int i=0,j=0,k;
    while(i<n && j<m)
    {
        if(a[i]<b[j]){
            vec.push_back(a[i++]);
        }
        else if(a[i]>b[j]){
            vec.push_back(b[j++]);
        }
        else{
            vec.push_back(a[i++]);
            j++;
        }
    }
    if(i!=n) {
        for(k=i;k<n;k++) vec.push_back(a[k]);
    }
    if(j!=m) {
        for(k=j;k<m;k++) vec.push_back(b[k]);
    }

    
    return vec;
    
    }
};

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	return 0;
}  