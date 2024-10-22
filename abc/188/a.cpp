#include <bits/stdc++.h>
using namespace std;

int x, y;

int main()
{
  cin >> x >> y;
  int mn = min(x, y);
  int mx = max(x, y);
  if (mn + 3 > mx)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}