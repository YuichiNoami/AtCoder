#include <bits/stdc++.h>
using namespace std;

int n, x;

int main()
{
  cin >> n >> x;
  int t = 0;
  for (int i = 0; i < n; i++)
  {
    int v, p;
    cin >> v >> p;
    t += v * p;
    if (t > x * 100)
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}