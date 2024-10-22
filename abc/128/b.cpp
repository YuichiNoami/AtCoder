#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
  cin >> n;
  vector<tuple<string, int, int>> list(n);
  for (int i = 0; i < n; i++)
  {
    string s;
    int p;
    cin >> s >> p;
    list.at(i) = make_tuple(s, 100 - p, i + 1);
  }
  sort(list.begin(), list.end());

  for (auto v : list)
  {
    int num;
    tie(ignore, ignore, num) = v;
    cout << num << endl;
  }
}