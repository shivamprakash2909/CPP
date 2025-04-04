#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int *p = &num;
    int *q = p;
    cout << "Value num " << num << endl;
    (*q)++;
    cout << "Address of num " << &num << endl;
    cout << "Address of num " << p << endl;
    cout << "Value p " << *p << endl;
    cout << "Value q " << *q << endl;
    cout << "Value num " << num << endl;
    return 0;
}