#include <bits/stdc++.h>
using namespace std;

string s, rs;

int main()
{
  cin >> s;
  bool flag = false;
  string rs = s;
  reverse(rs.begin(), rs.end());
  if (rs == s)
  {
    flag = true;
  }
  if (!flag)
  {
    for (int i = 0; i < 10; i++)
    {
      s = '0' + s;
      string rs = s;
      reverse(rs.begin(), rs.end());

      if (rs == s)
      {
        flag = true;
        break;
      }
    }
  }

  cout << (flag ? "Yes" : "No") << endl;
}