#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main()
{
  ll n;
  cin >> n;
  ll ans = 0;
  for (ll i = 0; i <= n; i++)
  {
    if (pow(2, i) > n)
    {
      break;
    }
    ans = i;
  }
  cout << ans << endl;
}