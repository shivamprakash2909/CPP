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
        int v = i;
        while (j <= i)
        {
            cout << v << " ";
            v = v + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}