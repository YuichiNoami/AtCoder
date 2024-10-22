#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long N;
  cin >> N;

  vector<int> cnt(3, 0);
  while (N)
  {
    cnt.at(N % 10 % 3)++;
    N /= 10;
  }
  int cur = (cnt.at(1) + cnt.at(2) * 2) % 3;
  int k = cnt.at(0) + cnt.at(1) + cnt.at(2);
  int res;
  if (!cur)
  {
    res = 0;
  }
  else if (cur == 1)
  {
    if (cnt.at(1))
    {
      if (k == 1)
      {
        res = -1;
      }
      else
      {
        res = 1;
      }
    }
    else
    {
      if (k == 2)
      {
        res = -1;
      }
      else
      {
        res = 2;
      }
    }
  }
  else
  {
    if (cnt.at(2))
    {
      if (k == 1)
      {
        res = -1;
      }
      else
      {
        res = 1;
      }
    }
    else
    {
      if (k == 2)
      {
        res = -1;
      }
      else
      {
        res = 2;
      }
    }
  }
  cout << res << endl;
}