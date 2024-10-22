#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

ll n;

int main()
{
  cin >> n;
  unordered_set<ll> s;
  for (ll i = 2; i * i <= n; i++)
  {
    ll p = i * i;
    while (p <= n)
    {
      s.insert(p);
      p *= i;
    }
  }
  cout << n - s.size() << endl;
}