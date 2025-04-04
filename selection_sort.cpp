#include <iostream>
using namespace std;
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void SelectionSort(int arr[], int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
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
    SelectionSort(arr, n);
    return 0;
}