#include <iostream>
using namespace std;

void fib(short n, short prev1 = 1, short prev2 = 0)
{

    if (n == 0)
        return; // base case

    short res = prev1 + prev2;
    cout << res << " ";

    if (0 != n)
        fib(n = n - 1, prev1 = prev2 - prev1, prev2 = res);
}

int fib2(short n, short prev1 = 1, short prev2 = 0)
{

    if (n == 0)
        return 0; // base case

    short res = prev1 + prev2;
    cout << res << " ";
    if (0 != n)
        return fib2(n = n - 1, prev1 = prev2 - prev1, prev2 = res);
}

void fib3(short n, short prev1 = 1, short prev2 = 0)
{
    if (n == 0)
        return;
    else
    {
        short res = prev1 + prev2;
        prev2 = prev1;
        prev1 = res;
        cout << res << " ";
        fib3(n = n - 1, prev1, prev2);
    }
}

int main()
{
    fib(10);
    cout << endl;
    fib2(10);
    cout << endl;
    fib3(9);
}
