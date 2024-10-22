#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  ll n, m;
  cin >> n >> m;
  ll ac = 0;
  ll wa = 0;
  vector<ll> acmemo;
  map<ll, ll> wamemo;
  for (ll i = 0; i < m; i++)
  {
    wamemo[i] = 0;
  }
  for (ll i = 0; i < m; i++)
  {
    ll q;
    string res;
    cin >> q >> res;
    if (res == "AC")
    {
      if (find(acmemo.begin(), acmemo.end(), q) == acmemo.end())
      {
        acmemo.push_back(q);
        ac++;
        wa += wamemo[q];
      }
    }
    else if (res == "WA")
    {
      if (find(acmemo.begin(), acmemo.end(), q) == acmemo.end())
      {
        wamemo[q]++;
      }
    }
  }
  cout << ac << ' ' << wa << endl;
}