#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the value of k";
    int k;
    cin>> k;
    vector<int> num{1, 4, 5, 3, 19, 3};

    sort(num.begin(),num.end());
    
    cout << "K'th smallest element is " << num[k-1];
    return 0;
}
