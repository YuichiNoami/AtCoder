#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int ans = 0;
  if (n >= 212)
  {
    ans += 8;
  }
  else if (n >= 126)
  {
    ans += 6;
  }
  else
  {
    ans += 4;
  }
  cout << ans << endl;
}