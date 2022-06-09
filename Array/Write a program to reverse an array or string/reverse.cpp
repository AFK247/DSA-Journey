#include <bits/stdc++.h>
using namespace std;

void display(int *arr, int n)
{

   int i;
   for (i = 0; i < n; i++)
      cout << arr[i] << " ";
}

int main()
{
   int n, i, j, temp;
   cout << "Enter the no of elements";
   cin >> n;

   int arr[n];
   for (i = 0; i < n; i++)
      cin >> arr[i];

   cout << "Given Array ";
   display(arr, n);

   for (i = 0,j=n-1; i<n/2, j> n / 2; i++, j--)
   {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
   }
   cout << "\nReversed Array ";
   display(arr, n);

   return 0;
}