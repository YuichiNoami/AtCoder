#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int p, w, g, y;
  p = w = g = y = 0;
  for (int i = 0; i < n; i++)
  {
    char c;
    cin >> c;
    if (c == 'P')
    {
      p++;
    }
    else if (c == 'W')
    {
      w++;
    }
    else if (c == 'G')
    {
      g++;
    }
    else if (c == 'Y')
    {
      y++;
    }
  }
  if (p > 0 && w > 0 && g > 0 && y > 0)
  {
    cout << "Four" << endl;
  }
  else
  {
    cout << "Three" << endl;
  }
}