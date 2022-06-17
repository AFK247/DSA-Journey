#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int matSearch (vector <vector <int>> &matrix, int N, int M, int target)
	{
	    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (target == matrix[i][j])
                return 1;
        }
    }
    return 0;
    
	}
};

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
} 