#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a.at(i);
  }
  int ans = 0;
  for (int l = 0; l < n; l++)
  {
    int x = a.at(l);
    for (int r = l; r < n; r++)
    {
      x = min(x, a.at(r));
      ans = ans = max(ans, x * (r - l + 1));
    }
  }
  cout << ans << endl;
}