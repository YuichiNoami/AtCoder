#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> btn(n + 1);
  for (int i = 1; i <= n; i++)
  {
    cin >> btn.at(i);
  }
  int now = 1;
  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    now = btn.at(now);
    ans++;
    if (now == 2)
    {
      break;
    }
  }
  if (now == 2)
  {
    cout << ans << endl;
  }
  else
  {
    cout << -1 << endl;
  }
}