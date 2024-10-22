#include <bits/stdc++.h>
using namespace std;

int h, w, x, y;

int main()
{
  cin >> h >> w >> x >> y;
  x--;
  y--;
  vector<string> map;
  for (int i = 0; i < h; i++)
  {
    string s;
    cin >> s;
    map.push_back(s);
  }

  int ans = -3;

  for (int i = x; i < h; i++)
  {
    if (map.at(i).at(y) == '#')
    {
      break;
    }
    ans++;
  }
  for (int i = x; i >= 0; i--)
  {
    if (map.at(i).at(y) == '#')
    {
      break;
    }
    ans++;
  }
  for (int j = y; j < w; j++)
  {
    if (map.at(x).at(j) == '#')
    {
      break;
    }
    ans++;
  }
  for (int j = y; j >= 0; j--)
  {
    if (map.at(x).at(j) == '#')
    {
      break;
    }
    ans++;
  }

  cout << ans << endl;
}