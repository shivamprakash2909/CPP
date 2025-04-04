#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n";
    cout << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        // space print
        int v = i - 1;
        while (v)
        {
            cout << " +";
            v = v - 1;
        }
        // num print
        int x = n - i + 1;
        while (x)
        {
            cout << i;
            x = x - 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}