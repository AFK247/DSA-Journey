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
   int n, i, min,max;
   cout << "Enter the no of elements";
   cin >> n;

   int arr[n];
   for (i = 0; i < n; i++)
      cin >> arr[i];

    min=arr[0];
    max=arr[0];
    
   for (i = 1; i < n; i++){
       if(arr[i]>max)
       max=arr[i];
       else if(arr[i]<min)
       min=arr[i];
   }
    

   cout << min<<" "<<max;

   return 0;
}