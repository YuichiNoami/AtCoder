#include <bits/stdc++.h>
using namespace std;

int64_t n;

int64_t solve(int64_t n)
{
  if (n < 2)
  {
    return 2 - n;
  }
  vector<int64_t> ans(n + 1);
  ans.at(0) = 2, ans.at(1) = 1;
  for (int64_t i = 2; i <= n; i++)
  {
    ans.at(i) = ans.at(i - 2) + ans.at(i - 1);
  }
  return ans.at(n);
}

int main()
{
  cin >> n;
  cout << solve(n) << endl;
}
