#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  string cur;
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    char t = s.at(i);
    if (!(t == 'A' || t == 'B' || t == 'C'))
    {
      cur = "";
      continue;
    }
    cur.push_back(s.at(i));
    if (cur.find("ABC") != string::npos)
    {
      ans++;
      cur = "";
    }
  }
  cout << ans << endl;
}