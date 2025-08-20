#include <iostream>
using namespace std;

void fibo(short n)
{
  short prev1 = 1;
  short prev2 = 0;
  for (short f = 0; f < n; f++)
  {
    short res = prev1 + prev2;
    cout << res << " ";
    prev2 = res;
    prev1 = prev2 - prev1;
  }
}

int main()
{
  fibo(10);
}