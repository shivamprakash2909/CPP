#include <iostream>
using namespace std;
void SwapAlt(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100];

    
    // arr ip
    int n;
    cout << "Enter length of array\n";
    cin >> n;
    cout << "Enter the arr\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    SwapAlt(arr, n);
    cout << "reverse of array is\n";
    printarr(arr, n);

    return 0;
}