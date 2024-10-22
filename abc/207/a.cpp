#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> card(3);
  for (int i = 0; i < 3; i++)
  {
    cin >> card.at(i);
  }
  sort(card.begin(), card.end());
  reverse(card.begin(), card.end());
  cout << card.at(0) + card.at(1) << endl;
}