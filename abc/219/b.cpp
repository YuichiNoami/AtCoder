#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<string> s(4);
  for (int i = 1; i <= 3; i++)
  {
    cin >> s.at(i);
  }
  string t;
  cin >> t;
  for (auto i = 0; i < t.length(); i++)
  {
    int j = t.at(i) - '0';
    cout << s.at(j);
  }
  cout << endl;
}