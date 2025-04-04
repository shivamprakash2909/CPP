#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {4, 1, 2, 1, 2};
    int result = arr[0];
    for (int i = 1; i < 5; i++)
    {
        result ^= arr[i];
        cout << result << " ";
    }
}