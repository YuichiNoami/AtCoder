#include <bits/stdc++.h>
using namespace std;

int n, m, k;

int main()
{
  int ans = 0;
  std::cin >> n >> m;
  vector<pair<int, int>> cond(m);
  for (int i = 0; i < m; i++)
  {
    int a, b;
    std::cin >> a >> b;
    cond.at(i) = make_pair(a, b);
  }
  cin >> k;
  vector<pair<int, int>> pick(k);
  for (int i = 0; i < k; i++)
  {
    int c, d;
    std::cin >> c >> d;
    pick.at(i) = make_pair(c, d);
  }
  for (int bit = 0; bit < 1 << k; bit++)
  {
    vector<bool> ball(n);
    for (int i = 0; i < k; i++)
    {
      int c, d;
      tie(c, d) = pick.at(i);
      ball[bit & 1 << i ? c : d] = true;
    }
    int cnt = 0;
    for (auto [a, b] : cond)
    {
      if (ball[a] && ball[b])
      {
        cnt++;
      }
    }
    ans = max(ans, cnt);
  }
  cout << ans << endl;
}