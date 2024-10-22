#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
ll n;

int main()
{
  cin >> n;
  ll ans = 0;
  if (n >= 1000)
  {
    vector<ll> nums;

    for (long unsigned int i = 0; i < 5; i++)
    {
      string nines = "";
      for (long unsigned int j = 0; j <= i; j++)
      {
        nines += "999";
      }
      string ref = "1";
      for (long unsigned int j = 0; j < nines.size(); j++)
      {
        ref += "0";
      }
      if (n >= stoll(ref))
      {
        ll tmp = n - stoll(nines);
        nums.push_back(tmp);
      }
    }
    for (long unsigned int i = 0; i < nums.size(); i++)
    {
      ans += nums.at(i);
    }
  }
  cout << ans << endl;
}