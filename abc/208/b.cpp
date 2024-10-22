#include <bits/stdc++.h>
using namespace std;

int price;

int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

int main()
{
  int ans = 0;

  vector<int> coin(11);
  for (int i = 1; i <= 10; i++)
  {
    coin.at(i) = factorial(i);
  }

  cin >> price;
  while (price > 0)
  {
    for (int i = 10; i >= 1;)
    {
      if (coin.at(i) <= price)
      {
        price -= coin.at(i);
        ans++;
      }
      else
      {
        i--;
      }
    }
  }
  cout << ans << endl;
}