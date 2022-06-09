#include <bits/stdc++.h>
using namespace std;

vector <int> do_union(int a[], int n, int b[], int m)
{
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
    if(i<n) {
        for(k=i;k<n;k++) vec.push_back(a[k]);
    }
    if(j<m) {
        for(k=j;k<m;k++) vec.push_back(b[k]);
    }
    return vec;
    
}

int main()
{
    vector<int> s;
    int a[] = { 7, 13, 19,2,-6,1, 3, 6,4,9,};
    int n1 = sizeof(a) / sizeof(a[0]);

    int b[] = { 2 , 11,10, 18,1, 3, 6, -2,-5};
    int n2 = sizeof(b) / sizeof(b[0]);

    sort(a,a+n1);
    sort(b,b+n2);

    s = do_union(a, n1, b, n2);

    cout <<"Size of The Set: "<< s.size()<<endl;

    for (auto itr = s.begin(); itr != s.end(); itr++)
        cout << *itr << " ";

    return 0;
}