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
        int j = 1;
        // print 1st triangle
        int x = n - i + 1;
        while (x)
        {
            cout << j << " ";
            j++;
            x--;
        }
        // print star
        int y = (i * 2) - 2;
        while (y)
        {
            cout << "*"
                 << " ";
            y--;
        }
        // print 2nd triangle
        int z = n - i + 1;
        while (z >= 1)
        {
            cout << z << " ";
            z--;
        }
        cout << endl;
        i++;
    }
}