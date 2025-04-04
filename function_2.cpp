#include <iostream>
using namespace std;
bool isEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }

    return false;
}

int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;

    if (isEven(n) == true)
    {
        cout << n << " is Even\n";
    }
    else
    {
        cout << n << " is Odd\n";
    }
    return 0;
}