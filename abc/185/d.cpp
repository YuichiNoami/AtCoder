#include <bits/stdc++.h>
using namespace std;

int N, M;
int now = 1;
int k, len;

int main()
{
  cin >> N >> M;
  k = N;
  len = N;

  vector<int> a(M);
  vector<int> b;
  for (int i = 0; i < M; i++)
  {
    cin >> a.at(i);
  }

  sort(a.begin(), a.end());
  a.insert(a.begin(), 0);
  a.push_back(N + 1);
  for (int i = 0; i < a.size() - 1; i++)
  {
    len = a.at(i + 1) - a.at(i) - 1;
    if (len > 0)
    {
      b.push_back(len);
      k = min(k, len);
    }
  }
  int ans = 0;
  for (int i = 0; i < b.size(); i++)
  {
    ans += (b[i] + k - 1) / k;
  }
  cout << ans << endl;
}