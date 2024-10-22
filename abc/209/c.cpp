#include <bits/stdc++.h>
using namespace std;
int mod = 1000000000 + 7;

int main()
{
  int n;
  cin >> n;
  vector<int> c(n);
  for (int i = 0; i < n; i++)
  {
    cin >> c.at(i);
  }
  sort(c.begin(), c.end());
  long long ans = 1;
  for (int i = 0; i < n; i++)
  {
    ans = ans * max(0, c.at(i) - i) % mod;
  }
  cout << ans << endl;
}