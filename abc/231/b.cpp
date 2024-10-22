#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  map<string, int> m;
  for (int i = 0; i < n; i++)
  {
    string nm;
    cin >> nm;
    m[nm]++;
  }

  vector<pair<int, string>> v;
  for (auto it = m.begin(); it != m.end(); it++)
  {
    v.push_back(make_pair(it->second, it->first));
  }

  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());

  cout << v[0].second << endl;
}