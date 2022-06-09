#include <bits/stdc++.h>
using namespace std;

vector <int> do_intersection(int a[], int n, int b[], int m)
{
    set<int> s;
    vector<int> s2;

        for (int i = 0; i < n; i++)
            s.insert(a[i]);

        for (int i = 0; i < m; i++){
            if (s.find(b[i]) != s.end()){
                s2.push_back(b[i]);   
            }
        }
    return s2;

}

int main()
{
    vector<int> s;
    int a[] = {2, 11, 10, 18, 1, 3, 6, -2, -5};
    int n1 = sizeof(a) / sizeof(a[0]);

    int b[] = { 7,13,19,2,-6,1,3,6,4,9};
    int n2 = sizeof(b) / sizeof(b[0]);


    cout<<endl;

    s=do_intersection(a, n1, b, n2);

    
    cout << "Size of The Set Intersection: " << s.size() << endl;

    for (auto itr = s.begin(); itr != s.end(); itr++)
        cout << *itr << " ";
    

    return 0;
}