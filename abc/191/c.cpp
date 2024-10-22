#include <bits/stdc++.h>
using namespace std;

int h, w;

int main()
{
  cin >> h >> w;
  vector<string> s(h);
  for (int i = 0; i < h; i++)
  {
    cin >> s[i];
  }
  int ans = 0;
  for (int i = 0; i < h - 1; i++)
  {
    for (int j = 0; j < w - 1; j++)
    {
      int cnt = 0;
      if (s[i][j] == '#')
      {
        cnt++;
      }
      if (s[i + 1][j] == '#')
      {
        cnt++;
      }
      if (s[i][j + 1] == '#')
      {
        cnt++;
      }
      if (s[i + 1][j + 1] == '#')
      {
        cnt++;
      }

      if (cnt == 1 || cnt == 3)
      {
        ans++;
      }
    }
  }

  cout << ans << endl;
}