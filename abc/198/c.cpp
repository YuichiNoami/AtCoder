#include <bits/stdc++.h>
using namespace std;

double r, x, y;

int main()
{
  cin >> r >> x >> y;
  double d = sqrt(x * x + y * y);
  double ans = 0;
  if (d == r)
  {
    ans += 1;
  }
  else if (d <= r * 2)
  {
    ans += 2;
  }
  else
  {
    ans = ceil(d / r);
  }
  cout << ans << endl;
}
