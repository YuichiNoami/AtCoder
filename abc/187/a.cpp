#include <bits/stdc++.h>
using namespace std;

int a, b;

int main()
{
  cin >> a >> b;
  int asum = 0;
  int bsum = 0;
  for (int i = 0; i < 3; i++)
  {
    asum += a % 10;
    a /= 10;
  }
  for (int i = 0; i < 3; i++)
  {
    bsum += b % 10;
    b /= 10;
  }
  cout << max(asum, bsum) << endl;
}