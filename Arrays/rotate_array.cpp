// Rotate an array clockwise by K units

// Example : [1, 3, 5, 7, 9] k = 2
// Output : [7, 9, 1, 3, 5]

// Approach -1 (Bruteforce Approach Time Complexity - (O(n^2)))

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

//   int k;
//   cin >> k;

//   while(k--)
//   {
//     int temp = a[n-1];
//     for(int i=n-2;i>=0;i--)
//     {
//       a[i+1] = a[i];
//     }
//     a[0] = temp;
//   }

//   for(int i=0;i<n;i++)
//   {
//     cout << a[i] << " ";
//   }
//   cout << "\n";
//   return 0;
// }

// Approach - 2 (Can we use some extra space to rotate the array)
// Time Complexity : O(n)
// Space Complexity : O(n)

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

  int k;
  cin >> k;

  int temp[n];

  for(int i=0;i<n;i++)
  {
    temp[(i+k)%n] = a[i];
  }

  for(int i=0;i<n;i++)
  {
    cout << temp[i] << " ";
  }
  cout << "\n";
  return 0;
}



