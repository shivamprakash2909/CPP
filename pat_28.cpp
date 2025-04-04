#include <iostream>
using namespace std;

void f(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            if (i == 1 || i == n)
            {
                cout << "*";
            }
            else
            {
                if (j == 1 || j == n - i + 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            j++;
        }
        cout << endl;
        i++;
    }
}

int main()
{
    int n;
    cout << "ENTER N: ";
    cin >> n;
    f(n);
    return 0;
}