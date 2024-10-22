#include <bits/stdc++.h>
using namespace std;

int a, b;

int main()
{
  cin >> a >> b;
  int ans = 0, to = 1;
  while (to < b)
  {
    to--;
    to += a;
    ans++;
  }
  cout << ans << endl;
}