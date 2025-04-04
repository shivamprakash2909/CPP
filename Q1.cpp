#include <iostream>
using namespace std;
int main()
{
    int product = 1;
    int sum = 0;
    int digit, n;
    cout << "Enter n\n";
    cin >> n;
    while (n != 0)
    {
        digit = n % 10;
        product = product * digit;
        sum = sum + digit;
        n = n / 10;
    }
    cout << "product= " << product << endl;
    cout << "sum= " << sum << endl;
    cout << "product - sum = " << product - sum << endl;

    return 0;
}