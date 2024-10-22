#include <bits/stdc++.h>
using namespace std;

typedef long unsigned ll;

ll n, k;

string join(const vector<ll> v)
{
  string s;
  string c;
  for (ll i = 0; i < v.size(); i++)
  {
    c = to_string(v[i]);
    s += c;
  }
  return s;
}

int main()
{
  cin >> n >> k;
  ll ans = n;
  for (ll i = 1; i <= k; i++)
  {
    vector<ll> nums;
    ll tmp = ans;
    while (tmp)
    {
      nums.push_back(tmp % 10);
      tmp /= 10;
    }

    sort(nums.begin(), nums.end());
    ll asc = stoll(join(nums));
    reverse(nums.begin(), nums.end());
    ll desc = stoll(join(nums));
    ans = desc - asc;
    if (ans <= 0)
    {
      break;
    }
  }
  cout << ans << endl;
}