#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter n\n";
    cin >> n;
    cout << "fibbonacci from 0 to " << n << " is : ";
    int a = 0;
    int b = 1;
    for (int i = 1; i <= n; i++)
    {
        int sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }

    return 0;
}