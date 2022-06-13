#include <bits/stdc++.h>
using namespace std;


vector<char> reverse(vector<char>& arr)
   {
      int i,j,temp;
      int n=arr.size();
      
      for (i = 0, j = n - 1; i < n / 2, j >= n / 2; i++, j--)
      {
         temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
      }
   }


int main()
{
      int n;
      char input;
      cin >> n;
      vector<char> a;
      for (int i = 0; i < n; i++)
      {
        cin>>input;
        a.push_back(input);
      }
      for (auto itr = a.begin(); itr!=a.end(); itr++)
      {
         cout << *itr << " ";
      }
      cout << endl;
      reverse(a);

      for (auto itr = a.begin(); itr!=a.end(); itr++)
      {
         cout << *itr << " ";
      }
      cout << endl;
   return 0;
}