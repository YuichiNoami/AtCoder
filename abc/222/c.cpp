#include <bits/stdc++.h>
using namespace std;

int janken(vector<vector<char>> a, int i, int n, int m)
{
  char c1 = a.at(n).at(i);
  char c2 = a.at(m).at(i);
  if (c1 == 'G' && c2 == 'C')
  {
    return 1;
  }
  else if (c1 == 'C' && c2 == 'P')
  {
    return 1;
  }
  else if (c1 == 'P' && c2 == 'G')
  {
    return 1;
  }
  else if (c1 == 'G' && c2 == 'P')
  {
    return 2;
  }
  else if (c1 == 'C' && c2 == 'G')
  {
    return 2;
  }
  else if (c1 == 'P' && c2 == 'C')
  {
    return 2;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> v;
  for (int i = 0; i < 2 * n; i++)
  {
    v.push_back(make_pair(0, i));
  }

  vector<vector<char>> a(2 * n, vector<char>(m));
  for (int i = 0; i < 2 * n; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < m; j++)
    {
      a.at(i).at(j) = s.at(j);
    }
  }

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < 2 * n; j += 2)
    {
      int p1 = v.at(j).second;
      int p2 = v.at(j + 1).second;
      int tmp = janken(a, i, p1, p2);
      if (tmp == 1)
      {
        v.at(j).first++;
      }
      else if (tmp == 2)
      {
        v.at(j + 1).first++;
      }
    }
    sort(
        v.begin(), v.end(), [&](pair<int, int> a, pair<int, int> b)
        {
          if (a.first == b.first)
            return a.second < b.second;
          else
            return a.first > b.first;
        });
  }
  for (auto i = 0; i < 2 * n; i++)
  {
    cout << v.at(i).second + 1 << " ";
  }
  cout << endl;
}