#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> r;
vector<bool> memo(2000);

void route(int s)
{
  if (memo.at(s))
  {
    return;
  }

  memo.at(s) = true;
  for (auto t : r.at(s))
  {
    route(t);
  }
}

int main()
{
  int n, m;
  cin >> n >> m;
  r.resize(n);
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    r.at(a - 1).push_back(b - 1);
  }

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      memo.at(j) = false;
    }
    route(i);
    for (int j = 0; j < n; j++)
    {
      if (memo.at(j))
      {
        ans++;
      }
    }
  }

  cout << ans << endl;
}