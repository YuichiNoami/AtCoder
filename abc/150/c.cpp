#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string p;
  string q;
  for (int i = 0; i < n; i++)
  {
    char c;
    cin >> c;
    p.push_back(c);
  }

  for (int i = 0; i < n; i++)
  {
    char c;
    cin >> c;
    q.push_back(c);
  }
  vector<int> v(n);
  iota(v.begin(), v.end(), 1);
  vector<string> slist;
  do
  {
    string s;
    for (auto x : v)
    {
      s += to_string(x);
    }
    slist.push_back(s);
  } while (next_permutation(v.begin(), v.end()));
  sort(slist.begin(), slist.end());
  vector<string>::iterator itr_a, itr_b;
  itr_a = find(slist.begin(), slist.end(), p);
  int a = distance(slist.begin(), itr_a) + 1;
  itr_b = find(slist.begin(), slist.end(), q);
  int b = distance(slist.begin(), itr_b) + 1;
  cout << abs(a - b) << endl;
}
