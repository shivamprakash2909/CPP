#include <iostream>
using namespace std;
int c(int x)
{
    int count = 0;
    while (x != 0)
    {
        if (x & 1)
        {
            count++;
        }
        x = x >> 1;
    }
    return count;
}

int main()
{
    int n, m;
    cout << "Enter n\n";
    cin >> n;
    cout << c(n);
    return 0;
}