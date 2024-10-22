#include <bits/stdc++.h>
using namespace std;

int n, x;

int main()
{
  cin >> n >> x;
  vector<int> a(n);
  auto sum = 0;
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    if (i % 2 == 0)
    {
      sum += tmp;
    }
    else
    {
      sum += --tmp;
    }
  }
  bool ans = sum <= x;
  cout << (ans ? "Yes" : "No") << endl;
}