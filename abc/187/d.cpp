#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

int main()
{
  cin >> n;
  ll X = 0;
  vector<ll> x(n);
  for (ll i = 0; i < n; i++)
  {
    ll a, b;
    cin >> a >> b;
    X -= a;
    x[i] = 2 * a + b;
  }
  sort(x.begin(), x.end());
  ll ans = 0;
  while (X <= 0)
  {
    X += x.back();
    x.pop_back();
    ans++;
  }
  cout << ans << endl;
}