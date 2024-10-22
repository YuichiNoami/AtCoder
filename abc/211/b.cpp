#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<string> s(4);
  for (int i = 0; i < 4; i++)
  {
    cin >> s.at(i);
  }
  sort(s.begin(), s.end());
  string res = "";
  for (auto &&i : s)
  {
    res += i;
  }
  cout << (res == "2B3BHHR" ? "Yes" : "No") << endl;
}