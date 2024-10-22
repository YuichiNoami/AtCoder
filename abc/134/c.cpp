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
  }
  vector<int> c = a;
  sort(c.begin(), c.end());
  reverse(c.begin(), c.end());

  int first = c.at(0);
  int second = c.at(1);

  for (int i = 0; i < n; i++)
  {
    cout << (a.at(i) == first ? second : first) << endl;
  }
}