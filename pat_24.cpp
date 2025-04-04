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
        int v = n - i;
        while (v)
        {
            cout << " ";
            v = v - 1;
        }
        // num print
        int x = i;
        int count = i;
        while (x)
        {
            cout << count;
            x = x - 1;
            j = j + 1;
            count = count + 1;
        }
        cout << endl;
        i = i + 1;
    }
}