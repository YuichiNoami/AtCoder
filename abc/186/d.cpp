#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  vector<ll> s(n + 1, 0);
  for (int i = 0; i < n; i++)
  {
    s.at(i + 1) = s.at(i) + a.at(i);
  }
  ll ans = 0;
  for (int i = 1; i < n; i++)
  {
    ans += a.at(i) * i - s.at(i);
  }
  cout << ans << endl;
}