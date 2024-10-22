#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  auto len = s.size();
  string tail = {s.at(len - 2), s.at(len - 1)};
  if (tail == "er")
  {
    cout << "er";
  }
  else
  {
    cout << "ist";
  }
  cout << endl;
}