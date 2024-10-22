#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  int ans = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    cin >> a.at(i);
  }
  for (int i = 0; i < m; i++)
  {
    cin >> b.at(i);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  for (int i = 0, j = 0; i < n && j < m;)
  {
    ans = min(ans, abs(a.at(i) - b.at(j)));
    if (a.at(i) > b.at(j))
    {
      j++;
    }
    else
    {
      i++;
    }
  }
  cout << ans << endl;
}