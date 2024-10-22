#include <bits/stdc++.h>
using namespace std;

int a, b;

int main()
{
  cin >> a >> b;
  if (a % 2 != b % 2)
  {
    cout << "IMPOSSIBLE" << endl;
  }
  else
  {
    cout << (a + b) / 2 << endl;
  }
}