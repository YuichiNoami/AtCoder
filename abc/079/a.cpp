#include <bits/stdc++.h>
using namespace std;

int main()
{
  string n;
  char now;
  int cnt;
  cin >> n;
  now = n[0];
  cnt = 1;
  for (int i = 1; i < 4; i++)
  {
    if (n[i] == now)
    {
      cnt++;
      if (cnt >= 3)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
    else
    {
      cnt = 1;
    }
    now = n[i];
  }
  cout << "No" << endl;
}