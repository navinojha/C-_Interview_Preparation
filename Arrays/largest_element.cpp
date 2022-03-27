#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;

   int arr[n];
   for(int i=0;i<n;i++)
   {
     cin >> arr[i];
   }

   int largestElement  = INT_MIN;

   for(int i=0;i<n;i++)
   {
     largestElement = max(arr[i], largestElement);
   }

   cout << largestElement << "\n";
   return 0;
}