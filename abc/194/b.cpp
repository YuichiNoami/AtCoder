#include <bits/stdc++.h>
using namespace std;

int n;
int ans = INT_MAX;
int main()
{
  cin >> n;
  vector<int> wa(n);
  vector<int> wb(n);
  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    wa.at(i) = a;
    wb.at(i) = b;
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
      {
        ans = min(ans, wa.at(i) + wb.at(j));
      }
      else
      {
        ans = min(ans, max(wa.at(i), wb.at(j)));
      }
    }
  }
  cout << ans << endl;
}