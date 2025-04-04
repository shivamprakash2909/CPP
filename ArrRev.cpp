#include<iostream>
using namespace std;
void ArrRev(int arr[],int n)
{
    int s=0;
    int l=n-1;
    while(s<=l)
    {
        swap(arr[s],arr[l]);
        s++;
        l--;
    }
    
}


void PrintArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}




int main()
{
   int arr[100];
    //arr ip
    int n;
    cout<<"Enter length of array\n";
    cin>> n;
    cout<<"Enter the arr\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ArrRev(arr,n);
    cout<<"Reverse of Array is : ";
    PrintArr(arr,n);
    return 0;
}
    