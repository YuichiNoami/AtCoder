#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num;
  cin >> num;
  string nstr = to_string(num);
  int len = nstr.size();
  int sum = 0;
  for (int i = 0; i < len; i++)
  {
    sum += (int)(nstr[i] - '0');
  }
  if (num % sum == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}