#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> q(4);
  cin >> q.at(0) >> q.at(1) >> q.at(2) >> q.at(3);
  int ans = *min_element(q.begin(), q.end());
  cout << ans << endl;
}