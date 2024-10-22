#include <bits/stdc++.h>
using namespace std;

int main()
{
  int start, blue, red, limit;
  cin >> start >> blue >> red >> limit;
  int ans = -1;
  int diff = red * limit - blue;
  if (diff > 0)
  {
    ans = (start + diff - 1) / diff;
  }
  cout << ans << endl;
}