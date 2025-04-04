#include <iostream>
using namespace std;
int ArrDup(int Arr[], int x)
{
    int ans = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (Arr[i] == Arr[j] && i != j)
            {
                ans = Arr[i];
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    int arr[1000];
    cout << "Enter the length of Array\n";
    cin >> n;
    // ip arr
    cout << "Enter the Array\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // recall fn
    cout << "Duplicate in Array is : " << ArrDup(arr, n) << endl;

    return 0;
}