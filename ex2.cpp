#include <iostream>
using namespace std;
int update(int a)
{
    a = a / 2;
    cout << 5 * a << endl;
    return a;
}
int main()
{
    int a = 10;
    cout << update(a) << endl;

    return 0;
}