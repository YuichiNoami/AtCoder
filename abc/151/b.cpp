#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, m;
  cin >> n >> k >> m;
  int sum = 0;
  for (int i = 0; i < n - 1; i++)
  {
    int s;
    cin >> s;
    sum += s;
  }
  for (int i = 0; i <= k; i++)
  {
    int avg = (sum + i) / n;
    if (avg >= m)
    {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}