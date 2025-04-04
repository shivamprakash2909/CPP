#include <iostream>
using namespace std;
void f(int x)
{
    int a = 0;
    int b = 1;
    switch (x)
    {
    case 0:
        cout << a;
        break;

    case 1:
        cout << a << " " << b << " ";
        break;

    default:
    {
        cout << a << " " << b << " ";
        for (int i = 1; i < x; i++)
        {
            int sum = a + b;
            cout << sum << " ";
            a = b;
            b = sum;
        }
    }
    }
}

int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;
    f(n);
    return 0;
}