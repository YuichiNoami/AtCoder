#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  vector<int> c(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a.at(i);
  }
  for (int i = 0; i < n; i++)
  {
    cin >> b.at(i);
  }
  int t = 0;
  for (int i = 0; i < n; i++)
  {
    t += a.at(i) * b.at(i);
  }
  cout << (t == 0 ? "Yes" : "No") << endl;
}