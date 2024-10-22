#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n;
  ll k;
  cin >> n >> k;
  vector<ll> a(n);
  vector<ll> o(n);
  ll mn, mx;
  mn = k / n;
  mx = mn + 1;
  for (int i = 0; i < n; i++)
  {
    ll tmp;
    cin >> tmp;
    a.at(i) = tmp;
  }
  iota(o.begin(), o.end(), 0);
  sort(o.begin(), o.end(), [&](int i, int j) { return a.at(i) < a.at(j); });
  vector<ll> ans(n, k / n);
  for (int i = 0; i < k % n; i++)
  {
    ans.at(o.at(i))++;
  }
  for (auto &&i : ans)
  {
    cout << i << endl;
  }
}
