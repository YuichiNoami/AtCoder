#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> cards(n);
  for (int i = 0; i < n; i++)
  {
    cin >> cards.at(i);
  }
  sort(cards.begin(), cards.end());
  reverse(cards.begin(), cards.end());
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      ans += cards.at(i);
    }
    else
    {
      ans -= cards.at(i);
    }
  }
  cout << ans << endl;
}
