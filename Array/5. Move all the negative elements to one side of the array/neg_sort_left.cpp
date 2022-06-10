//Dutch National Flag Algorithm(Coloring)
#include <bits/stdc++.h>
using namespace std;

void sort_neg(int arr[], int size)
{

    int hi = size - 1, mid = 0;
    while (mid <= hi)
    {
        if ((arr[mid]) < 0)     mid++;
        else    swap(arr[hi--], arr[mid]);
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
      
      sort012(a, n);

      for (int i = 0; i < n; i++)
      {
         cout << a[i] << " ";
      }
      cout << endl;
   }
   return 0;
}