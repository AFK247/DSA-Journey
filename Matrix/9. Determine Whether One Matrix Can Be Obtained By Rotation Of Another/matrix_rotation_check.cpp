#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateby90(vector<vector<int>> &a, int n)
    {
        int temp, i, j;
        for (i = 0; i < n; i++)
        {
            for (j = i; j < n; j++)
            {
                temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }

        int first_col = 0;
        int last_col = n - 1;
        while (first_col < last_col)
        {
            for (j = 0; j < n; j++)
            {
                temp = a[j][first_col];
                a[j][first_col] = a[j][last_col];
                a[j][last_col] = temp;
            }

            first_col++;
            last_col--;
        }
    }
   
    bool findRotation(vector<vector<int>>& a, vector<vector<int>>& target) {
        int n=a.size();
        int count=0, i, j;
        int l=4;
        
        while(l--){
            count=0;
            for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++){
                    if(a[i][j]!=target[i][j]) {break;}
                
                count++;
            }
                
        }
            
            if(count==(n*n))
                return true;
            
            rotateby90(a,n);
}
                  
        return false;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n),target(n);

        for (int i = 0; i < n; i++)
        {
            matrix[i].assign(n, 0);
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            target[i].assign(n, 0);
            for (int j = 0; j < n; j++)
            {
                cin >> target[i][j];
            }
        }

    bool ans;
        Solution ob;
        ans=ob.findRotation(matrix, target);
        cout<<ans;
    }
    return 0;
}