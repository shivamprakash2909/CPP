#include <iostream>
using namespace std;
int main()
{
    int m, n, i, j;
    int A[500][500];
    cout << "Enter number of col\n";
    cin >> n;
    cout << "Enter number of rows\n";
    cin >> m;
    cout << "Enter the matrix\n";

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << A[i][j];
}