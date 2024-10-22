#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  string s;
  cin >> n >> s;
  bool sun = false;
  if (s.at(n - 1) == 'o')
  {
    sun = true;
  }
  cout << (sun ? "Yes" : "No") << endl;
}