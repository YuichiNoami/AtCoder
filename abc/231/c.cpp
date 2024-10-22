#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a.begin(), a.end());
  for (int i = 0; i < q; i++)
  {
    int x;
    cin >> x;
    int l = n, r = -1;
    while (l - r > 1)
    {
      int m = (l + r) / 2;
      if (a[m] >= x)
        l = m;
      else
        r = m;
    }
    cout << n - l << endl;
  }
}