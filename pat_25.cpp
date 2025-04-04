#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // print space
        int x = n - i;
        while (x)
        {
            cout << " ";
            x = x - 1;
        }
        // print triangle
        int j = 1;

        while (j <= i)
        {
            cout << j;
            j++;
        }

        // print triangle
        int v = i - 1;
        while (v)
        {
            cout << v;
            v--;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}