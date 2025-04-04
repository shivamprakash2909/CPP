#include <iostream>
using namespace std;
void arrDup(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] == arr[i])
            {
                cout << arr[i] << " ";
            }
        }
    }
}

int main()
{
    int arr[100];
    int n;
    cout << "Enter length of arr\n";
    cin >> n;
    cout << "Enter array\n";
    // ip arr
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Duplicates in array are : ";
    arrDup(arr, n);

    return 0;
}