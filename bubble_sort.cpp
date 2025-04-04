#include <iostream>
using namespace std;
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubblesort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    bubblesort(arr, n);
    return 0;
    return 0;
}