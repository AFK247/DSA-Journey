#include <bits/stdc++.h>
using namespace std;

set<int> do_union(int a[], int n, int b[], int m)
{
    int min=(n<m)? n : m;
    
    set<int> s;
    for (int i = 0; i < min; i++)
    {
      s.insert(a[i]);
      s.insert(b[i]);
    }
     
    if (n > m)
    {
        for (int i = m; i < n; i++)
        {
            s.insert(a[i]);
        }
    }
    else if (n < m)
    {
        for (int i = n; i < m; i++)
        {
            s.insert(b[i]);
        }
    }

    return s;
}

int main()
{
    set<int> s;
    int a[] = { 2 , 11,10, 18,1, 3, 6, -2,-5};
    int n1 = sizeof(a) / sizeof(a[0]);

    int b[] = { 7, 13, 19,2,-6,1, 3, 6,4,9,};
    int n2 = sizeof(b) / sizeof(b[0]);

    s = do_union(a, n1, b, n2);
    cout <<"Size of The Set: "<< s.size()<<endl;

    for (auto itr = s.begin(); itr != s.end(); itr++)
        cout<< *itr<<" ";

    return 0;
}