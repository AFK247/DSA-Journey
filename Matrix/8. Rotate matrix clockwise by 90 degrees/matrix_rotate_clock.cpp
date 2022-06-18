#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to rotate matrix anticlockwise by 90 degrees.
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
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n);

        for (int i = 0; i < n; i++)
        {
            matrix[i].assign(n, 0);
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
} // } Driver Code Ends