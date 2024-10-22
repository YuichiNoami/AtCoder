#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
  cin >> n;
  vector<int> a(1 << n);
  for (int i = 0; i < 1 << n; i++)
  {
    cin >> a[i];
  }
  vector<int> remain(1 << n);
  iota(remain.begin(), remain.end(), 0);
  for (int i = 1; i <= n; i++)
  {
    vector<int> next_remain;
    for (int j = 0; j < 1 << (n - 1); j++)
    {
      if (a[remain[j * 2]] > a[remain[j * 2 + 1]])
      {
        next_remain.push_back(remain[j * 2]);
      }
      else
      {
        next_remain.push_back(remain[j * 2 + 1]);
      }
      if (i == n)
      {
        cout << (remain[0] == next_remain[0] ? remain[1] : remain[0]) + 1 << endl;
        return 0;
      }
      remain = next_remain;
    }
  }
}