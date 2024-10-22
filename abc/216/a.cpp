#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int len = s.size();
  int y = s.at(len - 1) - '0';
  s = s.substr(0, len - 2);
  if (y <= 2)
  {
    s += '-';
  }
  else if (y >= 7)
  {
    s += '+';
  }
  cout << s << endl;
}