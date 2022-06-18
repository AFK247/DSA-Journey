#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int median(vector<vector<int>> &matrix, int r, int c)
    {
        vector<int> vec;
        int i, j;
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
                vec.push_back(matrix[i][j]);
        }
        sort(vec.begin(),vec.end());
        return vec[(r*c)/2];
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
                cin >> matrix[i][j];
        Solution obj;
        cout << obj.median(matrix, r, c) << endl;
    }
    return 0;
}