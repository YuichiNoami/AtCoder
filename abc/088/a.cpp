#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, a, m;
  cin >> n >> a;
  m = n % 500;
  if (m <= a)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}