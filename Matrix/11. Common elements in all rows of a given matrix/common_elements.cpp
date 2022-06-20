#include <bits/stdc++.h>
using namespace std;

void findCommonElements(vector<vector<int>> &mat,int r,int c)
{
 
    map<int, int> newMap;

    for (int i = 0; i < c; i++)
        newMap[mat[0][i]] = 1;

    for (int i = 1; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (newMap[mat[i][j]] == i)
            {
                newMap[mat[i][j]] = i + 1;

                if (i == (r - 1))
                    cout << mat[i][j] << " ";
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r,c;
        cin >> r;
        cin >> c;
        vector <vector<int>> v(r, vector<int>(c));
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> v[i][j];

        findCommonElements(v,r,c);
    }
}
