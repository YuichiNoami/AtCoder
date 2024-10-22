#include <bits/stdc++.h>
using namespace std;

int n, d;

int main()
{
  cin >> n >> d;
  cout << (n + (d * 2 + 1) - 1) / (d * 2 + 1) << endl;
}