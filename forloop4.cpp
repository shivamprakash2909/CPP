#include <iostream>
using namespace std;

// bool isPrime(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }

//     return true;
// }

int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << n << " is not prime number\n";
    }
    else
    {
        cout << n << " is a prime \n";
    }

    return 0;
}