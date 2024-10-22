#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

ll a, b, x;

int main()
{
  int mn = 0, lim = 1000000001;
  cin >> a >> b >> x;
  ll mid = 0;
  while (lim - mn > 1)
  {
    mid = (mn + lim) / 2;
    ll tmp = a * mid + b * to_string(mid).size();
    if (tmp <= x)
    {
      mn = mid;
    }
    else
    {
      lim = mid;
    }
  }
  cout << mn << endl;
}