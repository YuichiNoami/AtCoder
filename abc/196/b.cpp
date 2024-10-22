#include <bits/stdc++.h>
using namespace std;

string x;

int main()
{
  cin >> x;
  if (x.find(".") == string::npos)
    cout << x << endl;
  else
    cout << x.substr(0, x.find(".")) << endl;
}