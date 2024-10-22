#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n;
  vector<int> ans(n);
  vector<string> blue(n);
  for (int i = 0; i < n; i++)
  {
    cin >> blue.at(i);
  }
  cin >> m;
  vector<string> red(m);
  for (int i = 0; i < m; i++)
  {
    cin >> red.at(i);
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (red.at(j) == blue.at(i))
      {
        blue.at(i) = "";
        red.at(j) = "";
      }
    }
  }
  vector<int> list(n);
  for (int i = 0; i < n; i++)
  {
    if (blue.at(i) != "")
    {
      list.at(i)++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (blue.at(i) != "" && blue.at(j) != "" && blue.at(i) == blue.at(j))
      {
        ans.at(i)++;
      }
    }
  }
  cout << *max_element(ans.begin(), ans.end()) << endl;
}