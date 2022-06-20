#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public: 
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int>spiral;
        int row1=0,row2=r-1,col1=0,col2=c-1;
        while(row1<=row2){

            
            for(int k=col1;k<=col2;k++){
                 spiral.push_back(matrix[row1][k]);                
            }
            if(col1>col2) break;
            row1++;


            for(int i=row1;i<=row2;i++){
                 spiral.push_back(matrix[i][col2]);                
            }
            if(row1>row2) break;
            col2--;


            for(int k=col2;k>=col1;k--){
                 spiral.push_back(matrix[row2][k]);                
            }
            if(col2<col1) break;
            row2--;


            for(int i=row2;i>=row1;i--){
                 spiral.push_back(matrix[i][col1]);                
            }
            if(row1>row2) break;
            col1++;

        }
        return spiral;
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int k=0; k<c; k++)
            {
                cin>>matrix[i][k];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
} 