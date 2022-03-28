/* Implement a function that takes an array as input and returns the maximum subarray sum
    
    Sample Input : [1, -2, 3, 4, 4, -2]
    Sample Input : [5, 0, -1, 0, 1, 2, -1]

    Sample Output : 11
    Sample Output : 7

*/

// Approach -1 (O(n^3) Approach)

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;

//   int a[n];
//   for(int i=0;i<n;i++)
//   {
//     cin >> a[i];
//   }  
//   int sum = 0;
//   int maxSum = INT_MIN;
//   for(int i=0;i<n;i++)
//   {
//     for(int j=i+1;j<n;j++)
//     {
//       sum = 0;
//       for(int k=i ;k <= j;k++)
//       {
//         sum = sum + a[k];
//       }
//       maxSum = max(sum, maxSum);
//     }
//   }

//   cout << maxSum << "\n";
//   return 0;
// }

// Approach -2 (We are using some kind of pre-computation technique i.e prefix Sum)

// Time complexity : O(n^2) Space Complexity : O(n)

// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//   int n;
//   cin >> n;
   
//   int a[n];

//   for(int i=0;i<n;i++)
//   {
//     cin >> a[i];
//   }
   
//   int prefixSum[n] = {0};
//   prefixSum[0] = a[0];

//   for(int i=1;i<n;i++)
//   {
//     prefixSum[i] = prefixSum[i-1] + a[i]; // calculating the prefix sum
//   }
  
//   int maxSubarraySum = INT_MIN;
//   for(int i=0;i<n;i++)
//   {
//     for(int j=i;j<n;j++)
//     {
//       int currentSubarraySum = i > 0 ? (prefixSum[j] - prefixSum[i-1]) : prefixSum[j]; // checking for index out of bound
//       maxSubarraySum = max(maxSubarraySum, currentSubarraySum); // updating the subarray sum
//     }
//   }

//   cout << maxSubarraySum << "\n";
//   return 0;

// }

// Approach - 3 (Using Kadane's Algorithm)

// Time Complexity : O(n) and Space Complexity : O(1)

#include<bits/stdc++.h>
using namespace std;

int findMaximumSubarraySum(int a[], int n)
{
  int currentSum = 0, maxSubarraySum = INT_MIN;

  for(int i=0;i<n;i++)
  {
    currentSum = currentSum + a[i];
    maxSubarraySum = max(currentSum, maxSubarraySum);
    currentSum = max(currentSum, 0); // For negative numbers
  }
  return maxSubarraySum;
}

int main()
{
  int n;
  cin >> n;

  int a[n];

  for(int i=0;i<n;i++)
  {
    cin >> a[i];
  }

  cout << findMaximumSubarraySum(a,n) << "\n";
  return 0;
}


