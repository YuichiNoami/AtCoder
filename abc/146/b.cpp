#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
  cin >> n >> s;
  auto len = s.size();
  for (auto i = 0; i < len; i++)
  {
    for (int j = 0; j < n; j++)
    {
      s.at(i) = s.at(i) == 'Z' ? 'A' : ++s.at(i);
    }
  }
  cout << s << endl;
}