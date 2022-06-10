#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    vector<int> vec;
    int a[]={1,2,3,4,5,6};
    n = sizeof(a) / sizeof(a[0]);

    vec.push_back(a[n-1]);
    for(i=0;i<n-1;i++){
        vec.push_back(a[i]);
    }
    for(auto it=vec.begin();it!=vec.end();it++){
        cout<<*it<<" ";
    }
}
