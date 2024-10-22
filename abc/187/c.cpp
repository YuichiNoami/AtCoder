#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
  cin >> n;
  string ans = "satisfiable";
  vector<string> strs(n);
  vector<string> ex(n);
  for (int i = 0; i < n; i++)
  {
    string tmp;
    cin >> tmp;
    strs.at(i) = tmp;
  }
  unordered_set<string> h(strs.begin(), strs.end());
  for (auto s : strs)
  {
    if (h.count('!' + s))
    {
      ans = s;
      break;
    }
  }
  std::cout << ans << endl;
}