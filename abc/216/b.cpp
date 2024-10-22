#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<string> s(n), t(n);
  bool ans = false;
  for (int i = 0; i < n && !ans; i++)
  {
    cin >> s.at(i) >> t.at(i);
    for (int j = 0; j < i; j++)
    {
      if (s.at(i) == s.at(j) && t.at(i) == t.at(j))
      {
        ans = true;
        break;
      }
    }
  }
  cout << (ans ? "Yes" : "No") << endl;
}