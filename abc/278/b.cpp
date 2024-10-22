#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, m;
  cin >> h >> m;

  int dh = (h / 10 * 10) + (m / 10);
  int dm = (h % 10 * 10) + (m % 10);

  while (dh * 100 + dm > 2359)
  {
    /* code */
  }
  
}