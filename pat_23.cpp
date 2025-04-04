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
        int j = 1;
        // print space
        int v = n - i;
        while (v)
        {
            cout << " ";
            v = v - 1;
        }
        // print num
        int x = i;
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
