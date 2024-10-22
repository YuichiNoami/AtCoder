#include <bits/stdc++.h>
using namespace std;

int main()
{
  string ans;
  const int price = 206;
  int n;
  cin >> n;
  double res = floor(n * 1.08);
  if (res < price)
  {
    ans = "Yay!";
  }
  else if (res > price)
  {
    ans = ":(";
  }
  else
  {
    ans = "so-so";
  }
  cout << ans << endl;
}