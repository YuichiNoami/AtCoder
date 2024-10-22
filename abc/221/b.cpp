#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;

  string ans = "No";

  if (s == t)
  {
    ans = "Yes";
  }

  for (int i = 0; i < s.size() - 1; i++)
  {
    swap(s.at(i), s.at(i + 1));
    if (s == t)
    {
      ans = "Yes";
    }
    swap(s.at(i), s.at(i + 1));
  }

  cout << ans << endl;
}