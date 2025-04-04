#include <iostream>
using namespace std;
int n()
{
    int n;

    cout << "enter n\n";
    cin >> n;
    cout << "sum from 0 to " << n << " is:"
         << " ";
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
        cout << sum << " ";
    }
    return 0;
}
