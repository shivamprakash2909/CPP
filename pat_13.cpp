
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
        while (j <= n)
        {
            char v = 'A' + i + j - 2;
            cout << v << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}