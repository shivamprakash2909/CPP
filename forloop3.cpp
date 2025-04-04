#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter n\n";
    cin >> n;
    cout << "count from 0 to " << n << " is:"
         << " ";
    for (int i = 0; i <= n; i++)
    {
        cout << i << " ";
    }
    return 0;
}