#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int ans = 100;
  int a;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    int tmp = 0;
    while (a > 0 && a % 2 == 0)
    {
      a /= 2;
      tmp++;
    }
    if (tmp < ans)
    {
      ans = tmp;
    }
  }
  cout << ans << endl;
}