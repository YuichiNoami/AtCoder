#include <bits/stdc++.h>
using namespace std;

int main()
{
  int s, t;
  cin >> s >> t;
  int ans = 0;
  for (int i = 0; i <= s; i++)
  {
    for (int j = 0; j + i <= s; j++)
    {
      for (int k = 0; k + j + i <= s; k++)
      {
        if (i * j * k <= t)
        {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
}