#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<pair<int, int>> a(n);
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    a.at(i) = make_pair(tmp, i + 1);
  }
  sort(a.begin(), a.end());
  cout << a.at(n - 2).second << endl;
}