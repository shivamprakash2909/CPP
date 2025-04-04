#include<iostream>
using namespace std;
void array(int arr[],int size, int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            cout << "Found the key "<<key << endl;
            return;
        }
    }
    cout << "Key not found\n";
}


int main()
{
    int arr[20];
    cout << "Enter length of array\n";
    int n;
    cin >> n;
    cout << "Enter the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout << "Enter the key to be found\n";
    int k;
    cin >> k;
    array(arr,n,k);
    return 0;
}