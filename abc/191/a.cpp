#include <bits/stdc++.h>
using namespace std;

int v, t, s, d;

int main()
{
  cin >> v >> t >> s >> d;
  cout << ((d < v * t || d > v * s) ? "Yes" : "No") << endl;
}