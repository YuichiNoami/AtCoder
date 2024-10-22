#include <bits/stdc++.h>
using namespace std;

int main()
{
  double startX, startY, goalX, goalY;
  cin >> startX >> startY >> goalX >> goalY;
  printf("%.10f\n",(startX * goalY + goalX * startY) / (startY + goalY));
}