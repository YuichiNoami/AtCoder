#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

ll x;

int main()
{
  cin >> x;
  for (ll i = 1; i <= x; i++)
  {
    if (stoll(to_string(i) + to_string(i)) > x)
    {
      cout << i - 1 << endl;
      break;
    }
  }
}