#include <bits/stdc++.h>
using namespace std;

string s;

vector<char> lo;
vector<char> up;

int main()
{
  for (char i = 'a'; i <= 'z'; i++)
  {
    lo.push_back(i);
  }
  for (char i = 'A'; i <= 'Z'; i++)
  {
    up.push_back(i);
  }
  cin >> s;
  int len = s.size();
  bool flag = true;
  for (int i = 0; i < len; i++)
  {
    char t = s.at(i);
    if (i % 2 != 0)
    {
      auto f = find(lo.begin(), lo.end(), t);
      if (f != lo.end())
      {
        flag = false;
        break;
      }
    }
    else
    {
      auto f = find(up.begin(), up.end(), t);
      if (f != up.end())
      {
        flag = false;
        break;
      }
    }
  }
  cout << (flag ? "Yes" : "No") << endl;
}