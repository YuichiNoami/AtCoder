#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main()
{
  cin >> a >> b >> c;
  int ans = 0;
  if (a == b)
  {
    ans = c;
  }
  else if (a == c)
  {
    ans = b;
  }
  else if (b == c)
  {
    ans = a;
  }
  cout << ans << endl;
}