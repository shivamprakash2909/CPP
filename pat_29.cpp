#include <iostream>
using namespace std;

void f(int n)
{
    int i = 1;
    while (i < n)
    {
        // left part
        int j = 1;
        while (j <= n)
        {
            // print space
            if (j <= n - i)
            {
                cout << " ";
            }
            else if (j == n - i + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }

            j++;
        }

        // right part
        // print space
        if (i > 1)
        {

            while (j < n + i - 1)
            {
                cout << " ";
                j++;
            }
            // print *
            cout << "*";
        }

        i++;
        cout << endl;
    }

    // bottom
    int j = 1;
    while (j < 2 * n)
    {
        cout << "*";
        j++;
    }
}

int main()
{
    int n;
    cout << "Enter n :";

    cin >> n;

    f(n);

    return 0;
}