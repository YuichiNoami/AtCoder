#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  bool even = c % 2 == 0;
  char ans = 'x';
  if (even)
  {
    if (abs(a) > abs(b))
    {
      ans = '>';
    }
    else if (abs(a) < abs(b))
    {
      ans = '<';
    }
    else
    {
      ans = '=';
    }
  }
  else
  {
    if (a > b)
    {
      ans = '>';
    }
    else if (a < b)
    {
      ans = '<';
    }
    else
    {
      ans = '=';
    }
  }
  cout << ans << endl;
}