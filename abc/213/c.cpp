#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, w, n;
  cin >> h >> w >> n;

  vector<int> a(n);
  vector<int> b(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a.at(i) >> b.at(i);
  }

  vector<int> ys;
  for (int i = 0; i < n; i++)
  {
    ys.push_back(a.at(i));
  }

  sort(ys.begin(), ys.end());
  ys.erase(unique(ys.begin(), ys.end()), ys.end());
  for (int i = 0; i < n; i++)
  {
    a.at(i) = lower_bound(ys.begin(), ys.end(), a.at(i)) - ys.begin();
  }

  vector<int> xs;
  for (int i = 0; i < n; i++)
  {
    xs.push_back(b.at(i));
  }
  sort(xs.begin(), xs.end());
  xs.erase(unique(xs.begin(), xs.end()), xs.end());
  for (int i = 0; i < n; i++)
  {
    b.at(i) = lower_bound(xs.begin(), xs.end(), b.at(i)) - xs.begin();
  }

  for (int i = 0; i < n; i++)
  {
    cout << a.at(i) + 1 << ' ' << b.at(i) + 1 << endl;
  }
}