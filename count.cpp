#include <iostream>
using namespace std;
void count(int x)
{
    for (int i = 1; i <= x; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    count(n);
    return 0;
}