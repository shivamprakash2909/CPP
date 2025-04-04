#include <iostream>
using namespace std;
int triplesum(int arr[], int s)
{
    int left = arr[0], right = arr[s - 1];
    while (right >= left)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }
        if (arr[left] < arr[right])
        {
            swap(left, right);
            left++;
            right--;
        }
    }
}

void printarr(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int a[8] = {1, 1, 0, 0, 0, 0, 1, 0};
    triplesum(a, 8);
    printarr(a, 8);
    return 0;
}