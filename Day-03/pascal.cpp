#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> result;
  vector<int> temp;
  for(int i=0;i<n;i++)
  {
    temp.clear();
    for(int j=0;j<=i;j++)
    {
      if(j == 0 || j == i) {
        temp.push_back(1);
      }
      else {
        temp.push_back(result[i-1][j-1] + result[i-1][j]);
      }
    }
    result.push_back(temp);
  }

  for(int i=0;i<result.size();i++)
  {
    for(int j=0;j<result[i].size();j++)
    {
      cout << result[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;

}