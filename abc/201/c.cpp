#include <bits/stdc++.h>
using namespace std;

int main()
{
  int ans = 0;
  string s;
  cin >> s;
  for (int i = 0; i < 10000; i++)
  {
    vector<bool> flag(10);
    int x = i;
    for (int j = 0; j < 4; j++)
    {
      flag.at(x % 10) = true;
      x /= 10;
    }
    bool flag2 = true;
    for (int j = 0; j < 10; j++)
    {
      if (s.at(j) == 'o' && !flag.at(j))
      {
        flag2 = false;
      }
      if (s.at(j) == 'x' && flag.at(j))
      {
        flag2 = false;
      }
    }
    ans += flag2 ? 1 : 0;
  }
  cout << ans << endl;
}