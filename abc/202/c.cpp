#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
  cin >> n;
  vector<int> a(n + 1);
  vector<int> b(n + 1);
  vector<int> c(n + 1);

  for (int i = 1; i <= n; i++)
  {
    cin >> a.at(i);
  }
  for (int i = 1; i <= n; i++)
  {
    cin >> b.at(i);
  }
  for (int i = 1; i <= n; i++)
  {
    cin >> c.at(i);
  }
  long long ans = 0;
  vector<int> cnt(n + 1);
  for (int i = 1; i <= n; i++)
  {
    cnt.at(b.at(c.at(i)))++;
  }
  for (int i = 1; i <= n; i++)
  {
    ans += cnt.at(a.at(i));
  }
  cout << ans << endl;
}