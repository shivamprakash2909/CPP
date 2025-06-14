#include <iostream>
using namespace std;

int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int den = factorial(r) * factorial(n - r);
    return num / den;
}

int main()
{
    int n, r;
    cout << "Enter n and r\n";
    cin >> n;
    cin >> r;
    cout << "Value of nCr is:" << nCr(n, r);
    return 0;
}