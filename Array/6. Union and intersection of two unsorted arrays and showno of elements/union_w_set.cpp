#include <bits/stdc++.h>
using namespace std;

set<int> do_union(int a[], int n1, int b[], int n2)
{
    set<int> s;

    for (int i = 0; i < n1; i++)
        s.insert(a[i]);
    for (int i = 0; i < n2; i++)
        s.insert(b[i]);

    return s;
}

int main()
{
    set<int> s;
    int a[] = { 7, 13, 19,2,-6,1, 3, 6,4,9,};
    int n1 = sizeof(a) / sizeof(a[0]);

    int b[] = { 2 , 11,10, 18,1, 3, 6, -2,-5};
    int n2 = sizeof(b) / sizeof(b[0]);

    s = do_union(a, n1, b, n2);
    cout <<"Size of The Set: "<< s.size()<<endl;

    for (auto itr = s.begin(); itr != s.end(); itr++)
        cout<< *itr<<" ";

    return 0;
}