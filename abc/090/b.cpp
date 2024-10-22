#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int ans = 0;
  for (int i = a; i <= b; i++)
  {
    bool pal = true;
    string istr = to_string(i);
    int len = istr.size();
    for (int j = 0; j < len; j++)
    {
      if (istr[j] != istr[len - 1 - j])
      {
        pal = false;
        break;
      }
    }
    if (pal)
    {
      ans++;
    }
  }
  cout << ans << endl;
}