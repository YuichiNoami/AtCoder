#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
  cin >> n;
  vector<pair<double, double>> xy(n);
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> xy.at(i).first >> xy.at(i).second;
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      double tmp = (xy.at(i).second - xy.at(j).second) / (xy.at(i).first - xy.at(j).first);
      if (tmp >= -1 && tmp <= 1)
      {
        ans++;
      }
    }
  }
  cout << ans << endl;
}