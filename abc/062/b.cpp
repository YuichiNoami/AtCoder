#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, w;
  cin >> h >> w;
  for (int i = -1; i <= h; i++)
  {
    string str;
    if (i >= 0 && i < h)
    {
      cin >> str;
    }

    for (int j = -1; j <= w; j++)
    {
      if (i >= 0 && j >= 0 && i < h && j < w)
      {
        cout << str.at(j);
      }
      else
      {
        cout << '#';
      }
    }
    cout << endl;
  }
}