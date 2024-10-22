#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  int res = 0;
  int ans = 0;
  for (int i = 2; i <= 1000; i++)
  {
    int cnt = 0;
    for (int j = 0; j < n; j++)
    {
      if (a.at(j) % i == 0)
      {
        cnt++;
      }
    }
    if (cnt >= res)
    {
      res = cnt;
      ans = i;
    }
  }
  cout << ans << endl;
}