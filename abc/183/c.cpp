#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<vector<int>> t(N + 1, vector<int>(N + 1));
  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= N; j++)
    {
      cin >> t.at(i).at(j);
    }
  }
  vector<int> costs;
  for (int i = 2; i <= N; i++)
  {
    costs.push_back(i);
  }
  int ans = 0;
  do
  {
    int cur = 1;
    int cos = 0;
    for (int c : costs)
    {
      cos += t.at(cur).at(c);
      cur = c;
    }

    cos += t.at(costs.back()).at(1);
    if (cos == K)
    {
      ans++;
    }
  } while (next_permutation(costs.begin(), costs.end()));
  cout << ans << endl;
}