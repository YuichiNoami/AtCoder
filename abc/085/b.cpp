#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> size(n);
  for (int i = 0; i < n; i++)
  {
    cin >> size.at(i);
  }
  sort(size.begin(), size.end());
  sort(size.begin(), size.end());
  int now = size.at(0);
  int ans = 1;
  for (int i = 1; i < n; i++)
  {
    if (size.at(i) != now)
    {
      ans++;
      now = size.at(i);
    }
  }
  cout << ans << endl;
}