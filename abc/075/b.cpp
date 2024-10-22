#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, w;
  cin >> h >> w;
  int map[h][w];
  for (int i = 0; i < h; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < w; j++)
    {
      if (s[j] == '#')
      {
        map[i][j] = 99;
      }
      else
      {
        map[i][j] = 0;
      }
    }
  }

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      if (map[i][j] >= 99)
      {
        if (i > 0 && j > 0)
        {
          map[i - 1][j - 1]++;
        }
        if (i > 0)
        {
          if (j + 1 < w)
          {
            map[i - 1][j + 1]++;
          }
          map[i - 1][j]++;
        }
        if (j > 0)
        {
          map[i][j - 1]++;
          if (i + 1 < h)
          {
            map[i + 1][j - 1]++;
          }
        }
        if (i + 1 < h)
        {
          map[i + 1][j]++;
          if (j + 1 < w)
          {
            map[i + 1][j + 1]++;
          }
        }
        if (j + 1 < w)
        {
          map[i][j + 1]++;
        }
      }
    }
  }

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      if (map[i][j] >= 99)
      {
        cout << '#';
      }
      else
      {
        cout << map[i][j];
      }
    }
    cout << endl;
  }
}