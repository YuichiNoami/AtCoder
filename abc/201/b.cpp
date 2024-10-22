#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
  cin >> n;
  vector<pair<int, string>> p(n);
  for (int i = 0; i < n; i++)
  {
    string s;
    int t;
    cin >> s >> t;
    p.at(i) = make_pair(t, s);
  }
  sort(p.begin(), p.end());
  reverse(p.begin(), p.end());
  cout << p.at(1).second << endl;
}