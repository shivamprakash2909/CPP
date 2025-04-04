#include<iostream>
using namespace std;

void updarr(int array[],int n){
cout<<"inside function"<<endl;
array[2]=126;
//printing the function
 for(int i=0;i<3;i++){
        cout<<array[i]<<endl;
    }
cout<<"Going to main function\n";
}


int main(){
    int arr[3]={1,2,3};
    updarr(arr,3);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
return 0;
}