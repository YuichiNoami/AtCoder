#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S, T;
  cin >> S >> T;
  int len = S.size();
  int ans = 0;
  for (int i = 0; i < len; i++)
  {
    if (S.at(i) != T.at(i))
    {
      ans++;
    }
  }
  cout << ans << endl;
}