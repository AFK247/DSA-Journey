#include <bits/stdc++.h>
using namespace std;


void reverse(int arr[], int n)
   {
      int i,j,temp;
      
      for (i = 0, j = n - 1; i < n / 2, j >= n / 2; i++, j--)
      {
         temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
      }
   }


int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      int a[n];
      for (int i = 0; i < n; i++)
      {
         cin >> a[i];
      }
      
      reverse(a, n);

      for (int i = 0; i < n; i++)
      {
         cout << a[i] << " ";
      }
      cout << endl;
   }
   return 0;
}