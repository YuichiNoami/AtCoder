#include <bits/stdc++.h>
using namespace std;

long n, x;

int main()
{
  cin >> n >> x;
  for (long i = 0; i < n; i++)
  {
    long tmp;
    cin >> tmp;
    if (tmp != x)
    {
      cout << tmp;
      if (i + 1 < n)
      {
        cout << ' ';
      }
    }
  }
  cout << endl;
}