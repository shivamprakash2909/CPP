#include <iostream>
using namespace std;
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int min = arr[i];
        int j = i - 1;
        for (j; j >= 0; j--)
        {

            if (arr[j] > min)
            {
                // shift min
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = min;
    }
    printarr(arr, n);
}

int main()
{
    cout << "Enter size of array\n";
    int n, arr[10];
    cin >> n;
    cout << "Enter arr\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sorted arr is\n";
    insertionsort(arr, n);
    return 0;
}