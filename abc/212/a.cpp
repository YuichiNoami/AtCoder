#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  string ans;
  if (a && !b)
  {
    ans = "Gold";
  }
  else if (!a && b)
  {
    ans = "Silver";
  }
  else
  {
    ans = "Alloy";
  }
  cout << ans << endl;
}