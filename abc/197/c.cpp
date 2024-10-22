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

  int ans = INT_MAX;
  for (auto i = 0; i < 1 << (n - 1); i++)
  {
    int orn = 0;
    int xorn = 0;
    for (int j = 0; j <= n; j++)
    {
      if (j < n)
      {
        orn |= a.at(j);
      }
      if (j == n || (i >> j & 1))
      {
        xorn ^= orn;
        orn = 0;
      }
    }
    ans = min(ans, xorn);
  }
  cout << ans << endl;
}