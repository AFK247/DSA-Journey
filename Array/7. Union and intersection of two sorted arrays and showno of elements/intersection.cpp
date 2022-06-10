#include <bits/stdc++.h>
using namespace std;

vector <int> do_intersection(int a[], int n, int b[], int m)
{
    vector<int> vec;
    int i=0,j=0,k;
    while(i<n && j<m)
    {
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            vec.push_back(a[i++]);
            j++;
        }
    }
    
    return vec;
    
}

int main()
{
    vector<int> s;
    int a[] = { 1,3,6,8,9,11};
    int n1 = sizeof(a) / sizeof(a[0]);

    int b[] = { 2,3,8,9,19,21,25};
    int n2 = sizeof(b) / sizeof(b[0]);

    s = do_intersection(a, n1, b, n2);

    cout <<"Size of The Intersection Set: "<< s.size()<<endl;

    for (auto itr = s.begin(); itr != s.end(); itr++)
        cout << *itr << " ";

    return 0;
}