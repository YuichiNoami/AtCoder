#include <bits/stdc++.h>
using namespace std;

int main()
{
  string x;
  cin >> x;
  vector<int> pos(26);
  for (int i = 0; i < 26; i++)
  {
    pos.at(x.at(i) - 'a') = i;
  }
  int n;
  cin >> n;
  vector<vector<int>> S(n);
  for (auto &&v : S)
  {
    string s;
    cin >> s;
    for (const auto c : s)
    {
      v.push_back(pos.at(c - 'a'));
    }
  }
  sort(S.begin(), S.end());
  for (const auto &s : S)
  {
    for (const auto i : s)
    {
      cout << x.at(i);
    }
    cout << endl;
  }
}