#include <iostream>
using namespace std;
int getPivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return e;
}

int main()
{
    int arr[10], n;
    cout << "Enter length of array\n";
    cin >> n;
    cout << "Enter rotated sorted array in monotonic order`\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array is pivot about index : " << getPivot(arr, n);
    return 0;
}