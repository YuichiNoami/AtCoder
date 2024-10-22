#include <bits/stdc++.h>
using namespace std;

int main()
{
  string n;
  cin >> n;

  sort(n.begin(), n.end());
  reverse(n.begin(), n.end());
  int ans = 0;

  for (int i = 0; i < (1 << n.length()); i++)
  {
    int l = 0, r = 0;
    for (int j = 0; j < n.length(); j++)
    {
      if (i & (1 << j))
      {
        l = l * 10 + n.at(j) - '0';
      }
      else
      {
        r = r * 10 + n.at(j) - '0';
      }
    }
    ans = max(ans, l * r);
  }

  cout << ans << endl;
}