#include <bits/stdc++.h>
using namespace std;

int n;
long ans = -1;

int main()
{
  cin >> n;
  vector<tuple<long, long, long>> pat(n);
  for (int i = 0; i < n; i++)
  {
    long a, p, x;
    cin >> a >> p >> x;
    pat.at(i) = make_tuple(p, a, x);
  }
  sort(pat.begin(), pat.end());
  for (int i = 0; i < n; i++)
  {
    long a, p, x;
    tie(p, a, x) = pat.at(i);
    if (x - a > 0)
    {
      ans = p;
      break;
    }
  }
  cout << ans << endl;
}