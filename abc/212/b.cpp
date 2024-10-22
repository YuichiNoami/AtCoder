#include <bits/stdc++.h>
using namespace std;

int mod(int x)
{
  return x % 10;
}

int main()
{
  string x;
  vector<int> a(4);
  cin >> x;
  for (int i = 0; i < 4; i++)
  {
    a.at(i) = (int)x.at(i);
  }

  bool same = true;
  bool step = true;
  for (int i = 0; i < 3; i++)
  {
    if (a.at(i + 1) != a.at(i))
    {
      same = false;
    }
    if (mod(a.at(i) + 1) != mod(a.at(i + 1)))
    {
      step = false;
    }
  }

  cout << (same || step ? "Weak" : "Strong") << endl;
}