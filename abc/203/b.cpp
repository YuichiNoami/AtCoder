#include <bits/stdc++.h>
using namespace std;

int n, k;

int main()
{
  int ans = 0;
  cin >> n >> k;
  for (int i = 1; i <= n; i++)
  {
    int head = i * 100;
    for (int j = 1; j <= k; j++)
    {
      ans += head + j;
    }
  }
  cout << ans << endl;
}