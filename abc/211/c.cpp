#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
  string s;
  cin >> s;
  int n = s.size();
  vector<vector<int>> dp(n + 1, vector<int>(9));
  rep(i, n + 1) dp.at(i).at(0) = 1;
  const int mod = 1000000000 + 7;
  string t = "chokudai";
  rep(i, n) rep(j, 8)
  {
    if (s.at(i) != t.at(j))
    {
      dp.at(i + 1).at(j + 1) = dp.at(i).at(j + 1);
    }
    else
    {
      dp.at(i + 1).at(j + 1) = (dp.at(i).at(j + 1) + dp.at(i).at(j)) % mod;
    }
  }
  cout << dp.at(n).at(8) << endl;
}