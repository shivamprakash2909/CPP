#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int flag;
    for(int i=2;i<n;i++)
    {
        if (n%i ==0)
        {
            flag =0;
           
        }
    }

    if(flag==0)
    {
        cout<<n<<" is not prime\n";

    }
    else
    {
        cout<<n<<" is prime\n";
    }
    return 0;
}