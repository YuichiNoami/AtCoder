#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a.at(i);
    a.at(i)--;
  }

  vector<int> b(n);
  for (int i = 0; i < n; i++)
  {
    cin >> b.at(i);
  }

  vector<int> c(n - 1);
  for (int i = 0; i < n - 1; i++)
  {
    cin >> c.at(i);
  }

  int sat = 0;
  int now = a.at(0);
  for (int i = 0; i < n; i++)
  {
    sat += b.at(a.at(i));
    if (a.at(i) == now + 1 && i <= n - 1)
    {
      sat += c.at(now);
    }
    now = a.at(i);
  }
  cout << sat << endl;
}