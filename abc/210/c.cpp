#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> c(n);
  map<int, int> mp;
  for (int i = 1; i <= n; i++)
  {
    cin >> c[i];
  }
  for (int i = 1; i <= k; i++)
  {
    mp[c[i]]++;
  }
  auto ans = mp.size();

  for (int i = k + 1; i <= n; i++)
  {
    mp[c[i]]++;
    mp[c[i - k]]--;
    if (mp[c[i - k]] == 0)
    {
      mp.erase(c[i - k]);
    }
    ans = max(ans, mp.size());
  }
  cout << ans << endl;
}