#include <bits/stdc++.h>
using namespace std;

map<char, int> revs;
string s;

int main()
{
  revs['0'] = 0;
  revs['1'] = 1;
  revs['6'] = 9;
  revs['8'] = 8;
  revs['9'] = 6;
  cin >> s;
  reverse(s.begin(), s.end());
  auto len = s.size();
  for (auto i = 0; i < len; i++)
  {
    cout << revs[s.at(i)];
  }
  cout << endl;
}