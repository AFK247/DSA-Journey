#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> arr, int n, int m)
    {
        int i, j, current_max = 0, count = 0,temp=0;
        vector<int> vec;
        for (i = 0; i < n; i++)
        {
            current_max = 0;
            for (j = 0; j < m; j++)
            {
                if (arr[i][j] != 1)
                    break;
                current_max++;
               // cout<<"Current Max: "<<current_max<<endl;
            }
           // cout<<"Current Max and m "<<current_max<<" "<< m <<endl;
            if (current_max == m)  {
                count++;
                //cout<<"Count:"<<count<<endl;
            }
               // cout<<i<<" "<<n<<endl;
             if((current_max != m) || i==(n-1))
            {   
                //cout<<count<<endl;
                if(count>temp)
                temp=count;
                count=0;
                //cout<<"temp : "<<temp<<endl;
            }
            
            
        }
        return temp*m;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends