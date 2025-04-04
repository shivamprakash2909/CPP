#include <iostream>
#include <vector>
using namespace std;

void printarr(int arr3[], int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}

void sort(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}

int main()
{
    int k;
    int arr1[4] = {1, 2, 3, 4};
    int arr2[5] = {5, 6, 7, 8, 9};
    int arr3[9] = {0};

    sort(arr1, 4, arr2, 5, arr3);
    printarr(arr3, 9);

    return 0;
}