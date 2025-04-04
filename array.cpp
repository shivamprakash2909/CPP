#include <iostream>
using namespace std;
void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{

    int n = 15;
    int array[n] = {2, 4, 3, 7, 9};
    printArray(arr, n);
    return 0;
}