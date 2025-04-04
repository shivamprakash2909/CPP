#include <iostream>
using namespace std;

int isPrime(int x)
{
    for (int i = 2; i <=x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;

    switch (isPrime(n))
    {
    case 0:
        cout << n << " Not prime\n";
        break;

    case 1:
        cout << n << " is Prime\n";
        break;
    }

    return 0;
}