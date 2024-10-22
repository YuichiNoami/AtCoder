#include <bits/stdc++.h>
using namespace std;

int main()
{
  int H, W;
  cin >> H >> W;
  vector<string> table(H);
  vector<bool> flag(W);
  for (int i = 0; i < H; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < W; j++)
    {
      if (s.at(j) == '#')
      {
        flag.at(j) = true;
      }
    }
    if (s.find('#') != string::npos)
    {
      table.at(i) = s;
    }
  }
  vector<bool> made(H);
  for (int i = 0; i < H; i++)
  {
    made.at(i) = false;
    for (int j = 0; j < W; j++)
    {
      if (flag.at(j))
      {
        if(table.size() > i && table.at(i).size() > j)
        cout << table.at(i).at(j);
        made.at(i) = true;
      }
    }
    if (made.at(i) && table.at(i) != "")
    {
      cout << endl;
    }
  }
}