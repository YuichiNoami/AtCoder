#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
  cin >> n;
  vector<int> h(n);
  for (int i = 0; i < n; i++)
  {
    cin >> h.at(i);
  }

  int ans = 0;
  for (int i = 0; i < n;)
  {
    int j = i + 1;
    int cnt = 0;
    while (j < n && h.at(j) <= h.at(i))
    {
      cnt++;
      i++;
      j++;
    }
    ans = max(ans, cnt);
    i = j;
  }

  cout << ans << endl;
}