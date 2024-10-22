#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int ans = 0;
  for (int i = 0; i < n; i++)
  { 
    int x;
    cin >> x;
    if (x * 2 > (k - x) * 2)
    {
      ans += (k - x) * 2;
    }
    else
    {
      ans += x * 2;
    }
  }
  cout << ans << endl;
}