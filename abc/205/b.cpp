#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  bool flag = true;
  for (int i = 0; i < n; i++)
  {
    if (a.at(i) != i + 1)
    {
      flag = false;
      break;
    }
  }
  cout << (flag ? "Yes" : "No") << endl;
}