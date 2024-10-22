#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, p;
  cin >> n >> p;
  vector<int> a(n);
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a.at(i);
    if (a.at(i) < p)
      ans++;
  }
  cout << ans << endl;
}