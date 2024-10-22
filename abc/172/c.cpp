#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  ll N, M, K;
  cin >> N >> M >> K;
  vector<ll> A(N + 1);
  vector<ll> B(M + 1);
  vector<ll> a(N + 1);
  vector<ll> b(M + 1);
  for (ll i = 1; i < N + 1; i++)
  {
    cin >> A.at(i);
  }
  for (ll i = 1; i < M + 1; i++)
  {
    cin >> B.at(i);
  }
  for (ll i = 1; i < N + 1; i++)
  {
    a.at(i) = a.at(i - 1) + A.at(i);
  }
  for (ll i = 1; i < M + 1; i++)
  {
    b.at(i) = b.at(i - 1) + B.at(i);
  }

  ll ans = 0, j = M;
  for (ll i = 0; i < N + 1; i++)
  {
    if (a.at(i) > K)
    {
      break;
    }
    while (b.at(j) > K - a.at(i))
    {
      j--;
    }
    ans = max(ans, i + j);
  }
  cout << ans << endl;
}