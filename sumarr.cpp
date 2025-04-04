#include<iostream>
using namespace std;
int ArrSum(int array[],int n)
{
    int sum =0;

    for(int i=0;i<n;i++)
    {
        sum=sum+array[i];
    }
    return sum;
}


int main()
{
    int arr [100];
    //ip array
    cout<<"Enter size of array\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum of array is : "<<ArrSum(arr,n)<<endl;

    return 0;
}