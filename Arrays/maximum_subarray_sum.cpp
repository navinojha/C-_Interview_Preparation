/* Implement a function that takes an array as input and returns the maximum subarray sum
    
    Sample Input : [1, -2, 3, 4, 4, -2]
    Sample Input : [5, 0, -1, 0, 1, 2, -1]

    Sample Output : 11
    Sample Output : 7

*/

// Approach -1 (O(n^3) Approach)

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int a[n];
  for(int i=0;i<n;i++)
  {
    cin >> a[i];
  }  
  int sum = 0;
  int maxSum = INT_MIN;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      sum = 0;
      for(int k=i ;k <= j;k++)
      {
        sum = sum + a[k];
      }
      maxSum = max(sum, maxSum);
    }
  }

  cout << maxSum << "\n";
  return 0;
}