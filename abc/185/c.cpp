#include <iostream> 
using namespace std;

int factorial(int n)
{
    int x = 1;

    for (int i = 1; i <= n; ++i)
    {
        x *= i;
    }
    return x;
}

int main()
{
  int n;
  cin >> n;
  long long ans = 1;
  for (int i = 1; i <= 11; i++)
  {
    ans *= n - i;
    ans /= i;
  }
  cout << ans << endl;
}