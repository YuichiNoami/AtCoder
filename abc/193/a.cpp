#include <bits/stdc++.h>
using namespace std;

double a, b;

int main()
{
  cin >> a >> b;
  double off = b / a;
  cout << (1.0 - off) * 100 << endl;
}