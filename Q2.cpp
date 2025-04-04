#include <iostream>
using namespace std;

int f(uint32_t n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1 == 1)
        {
            count++;
        }

        n = n >> 1;
    }

    return count;
}

int main()
{
    uint32_t n;
    cout << "Enter n\n";
    cin >> n;

    cout << f(n);
    return 0;
}