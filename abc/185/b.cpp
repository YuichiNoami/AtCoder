#include <bits/stdc++.h>
using namespace std;

int main()
{
  int max, cur, cnt, goal, last;
  cin >> cur >> cnt >> goal;
  max = cur;
  last = 0;
  bool flag = true;
  for (int i = 0; i < cnt; i++)
  {
    int entry, exit;
    cin >> entry >> exit;
    cur -= entry - last;;
    if (cur <= 0)
    {
      flag = false;
    }
    cur += exit - entry;
    if (cur > max)
    {
      cur = max;
    }
    
    last = exit;
  }
  cur -= goal - last;
  if (flag == false || cur <= 0)
  {
    cout << "No" << endl;
  }
  else
  {
    cout << "Yes" << endl;
  }
}