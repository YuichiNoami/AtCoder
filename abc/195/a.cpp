#include <bits/stdc++.h>
using namespace std;

int m, h;

int main()
{
  cin >> m >> h;
  string ans;
  if (h % m == 0)
  {
    ans = "Yes";
  }
  else
  {
    ans = "No";
  }
  cout << ans << endl;
}