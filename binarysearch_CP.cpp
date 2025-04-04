#include <iostream>
using namespace std;
void keyfind(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            cout << mid << " ";
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
        mid = (s + e) / 2;
    }
}

int main()
{
    int arr[10];
    int n;
    cout << "Ent n\n";
    cin >> n;
    cout << "Enter sorted array\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key\n";
    int k;
    cin >> k;
    cout << "Indexes of key is ";
    keyfind(arr, n, k);
    return 0;
}