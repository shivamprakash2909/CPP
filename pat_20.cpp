#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n";
    cout << endl;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int v = n - i + 1;
        while (v)
        {
            cout << "*";
            v = v - 1;
        }
        int j = 1;
        int x = i - 1;
        while (x)
        {
            cout << " ";
            x = x - 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}