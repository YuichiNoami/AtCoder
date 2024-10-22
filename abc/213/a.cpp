#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int ans = 0;
  for (int i = 0; i < 256; i++)
  {
    int tmp = a ^ i;
    if (tmp == b)
    {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
}