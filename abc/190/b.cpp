#include <bits/stdc++.h>
using namespace std;

int n;
int64_t s, d;

int main()
{
  cin >> n >> s >> d;
  vector<pair<int, int>> magic(n);
  for (int i = 0; i < n; i++)
  {
    int64_t x, y;
    cin >> x >> y;
    magic.at(i) = make_pair(x, y);
  }

  for (auto v : magic)
  {
    int64_t x, y;
    x = v.first;
    y = v.second;
    if (x < s && y > d)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}