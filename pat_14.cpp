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
        char v = 'A' + i - 1;
        while (j <= i)
        {
            cout << v << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}