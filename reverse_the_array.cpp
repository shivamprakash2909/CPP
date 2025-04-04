#include <iostream>
using namespace std;

void PrintArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void RevArr(int arr[], int n, int m)
{
    int s = m + 1, e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    cout << "Enter size of array\n";
    int n, m, arr[10];
    cin >> n;
    cout << "Enter arr\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter m\n";
    cin >> m;
    RevArr(arr, n, m);
    PrintArr(arr, n);
    return 0;
}