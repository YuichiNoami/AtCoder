#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    if (tmp > 10)
    {
      ans += tmp - 10;
    }
  }
  cout << ans << endl;
}