#include <iostream>
using namespace std;
int firstocc(int arr[], int n, int k)
{
    int s = 0, ans = -1;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (k == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        else if (k < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastocc(int arr[], int n, int k)
{
    int s = 0, ans = -1;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (k == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        else if (k < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
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
    cout << "Enter key\n";
    int k;
    cin >> k;
    cout << "Index at first occurrence is " << firstocc(arr, n, k) << endl;
    cout << "Index at last occurrence is " << lastocc(arr, n, k) << endl;
    cout << "total nummber of occurrence is " << lastocc(arr, n, k) - firstocc(arr, n, k) + 1;
    return 0;
}
