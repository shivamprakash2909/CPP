#include<iostream>
using namespace std;
int maxArr(int array[],int size){
    int max=array[0];
    for(int x=0;x<size;x++){
        if(array[x]>max){
            max=array[x];
        }
    }
    return max;
}

int minArr(int array[],int size){
    int min=array[0];
    for(int x=0;x<size;x++){
        if(min>array[x]){
            min=array[x];
        }
    }
    return min;
}

int main(){
    int arr[100];
    cout<<"Enter lengthn of array\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maximum of array is : "<<maxArr(arr,n)<<endl;
    cout<<"Minimum of array is : "<<minArr(arr,n)<<endl;
    return 0;
}