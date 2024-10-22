#include <bits/stdc++.h>
using namespace std;

int a, b, w;
int mn = INT_MAX, mx = 0;

int main()
{
  cin >> a >> b >> w;
  for (int i = 1; i <= 1000 * 1000; i++)
  {
    if (a * i <= w * 1000 && b * i >= w * 1000)
    {
      mn = min(mn, i);
      mx = max(mx, i);
    }
  }
  cout << (mx > 0 ? to_string(mn) + " " + to_string(mx) : "UNSATISFIABLE") << endl;
}