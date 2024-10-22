#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int mini = 0;
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int p;
    cin >> p;
    if (mini == 0)
    {
      mini = p;
    }

    if (p <= mini)
    {
      mini = p;
      ans++;
    }
  }
  cout << ans << endl;
}
