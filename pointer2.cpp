#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "address of arr is: " << arr << endl;
    cout << "address of arr is: " << &arr[0] << endl;
    cout << "address of arr[2] is: " << &arr[1] << endl;
    return 0;
}