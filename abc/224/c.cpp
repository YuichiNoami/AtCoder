#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<pair<int, int>> p(n);
  for (auto &i : p)
  {
    cin >> i.first >> i.second;
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if (
            (p.at(j).first - p.at(i).first) * (p.at(k).second - p.at(i).second) - (p.at(k).first - p.at(i).first) * (p.at(j).second - p.at(i).second) != 0)
        {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
}