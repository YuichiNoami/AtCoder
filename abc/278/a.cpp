#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> line(n, 0);
  vector<int> ans(n, 0);

  int tail = 0;

  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    if (i >= k)
    {
      cout << tmp << " ";
    }
    else
    {
      tail++;
    }
  }

  for (int i = 0; i < tail; i++)
  {
    cout << 0 << " ";
  }

  cout << endl;
}