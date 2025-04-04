#include <iostream>
using namespace std;
int pairsum(int arr[], int size, int s)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                cout << min(arr[i], arr[j]) << " ";
                cout << max(arr[i], arr[j]) << endl;
            }
        }
    }
}

int main()
{
    int a[100];
    int n;
    cout << "Enter arrray length\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter target\n";
    int S;
    cin >> S;
    pairsum(a, n, S);
    return 0;
}