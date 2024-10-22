#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  string sa;
  string sb;
  for (int i = 0; i < b; i++)
  {
    sa += to_string(a);
  }
  for (int i = 0; i < a; i++)
  {
    sb += to_string(b);
  }
  vector<string> sl(2);
  sl.at(0) = sa;
  sl.at(1) = sb;
  sort(sl.begin(), sl.end());
  cout << sl.at(0) << endl;
}