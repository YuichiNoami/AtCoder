#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> s(n), t(n);
  for (int i = 0; i < n; i++)
  {
    cin >> s.at(i);
  }
  for (int i = 0; i < n; i++)
  {
    cin >> t.at(i);
  }
  vector<int> memo = t;
  for (int i = 0; i < n * 2; i++)
  {
    memo.at((i + 1) % n) = min(memo.at((i + 1) % n), memo.at(i % n) + s.at(i % n));
  }
  for (int ans : memo)
  {
    cout << ans << endl;
  }
}