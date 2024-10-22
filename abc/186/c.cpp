#include <bits/stdc++.h>
using namespace std;

int main()
{
  int ans = 0;
  int max;
  string s10, s8;
  cin >> max;
  for (long long i = 1; i <= max; i++)
  {
    stringstream ss1, ss2;
    ss1 << dec << i;
    s10 = ss1.str();
    ss2 << oct << i;
    s8 = ss2.str();
    long unsigned int s10pos7 = s10.find('7');
    long unsigned int s8pos7 = s8.find('7');
    if (s10pos7 == string::npos && s8pos7 == string::npos)
      ans++;
  }
  cout << ans << endl;
}