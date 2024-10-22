#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;

int main()
{
  cin >> n;

  vector<int> cnt(401);
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    cnt.at(a + 200)++;
  }

  ll ans = 0;
  for (int i = -200; i < 201; i++)
  {
    for (int j = i + 1; j < 201; j++)
    {
      ll tmp = i - j;
      tmp *= tmp;
      tmp *= cnt.at(i + 200) * cnt.at(j + 200);
      ans += tmp;
    }
  }

  cout << ans << endl;
}