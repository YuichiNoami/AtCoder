#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, w, mn, me, ans;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  mn = 100;
  ans = 0;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cin >> a.at(i).at(j);
    }
    me = *min_element(a.at(i).begin(), a.at(i).end());
    mn = min(mn, me);
  }

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      int diff = a.at(i).at(j) - mn;
      if (diff > 0)
        ans += diff;
    }
  }

  cout << ans << endl;
}