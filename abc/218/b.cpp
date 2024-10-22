#include <bits/stdc++.h>
using namespace std;

int main()
{
  string ans = "";
  map<int, char> dic;
  int i = 1;
  for (char c = 'a'; c <= 'z'; c++, i++)
  {
    dic[i] = c;
  }
  for (int i = 0; i < 26; i++)
  {
    int n;
    cin >> n;
    ans += dic.at(n);
  }
  cout << ans << endl;
}