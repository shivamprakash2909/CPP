#include <iostream>
#include <math.h>
using namespace std;

int MaxRowSum(int arr[][4], int row)
{
    int maxi = 0;
    int rowIndex = -1;

    for (int row = 0; row < 4; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    return rowIndex;
}

void colsum(int arr[][4], int row)
{

    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

int RowSum(int arr[][4], int row, int i)
{
    int sum = 0;
    for (int col = 0; col < 4; col++)
    {
        sum = sum + arr[i][col];
    }
    return sum;
}
bool IsFound(int arr[][4], int key, int row)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == key)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4];
    // take input
    cout << "enter elements\n";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    // print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    /* int key;
     cout << "Enter key\n";
     cin >> key;
     if (IsFound(arr, key, 3))
     {
         cout << "Key found\n";
     }
     else
     {
         cout << "Key not found\n";
     }

     cout << "Enter row to be added\n";
     int i;
     cin >> i;
     cout << "Sum is : " << RowSum(arr, 3, i);
     cout << "Printing col sum\n";
     colsum(arr, 3);
     */
    cout << "MAx sum in row index: " << MaxRowSum(arr, 3);

    return 0;
}