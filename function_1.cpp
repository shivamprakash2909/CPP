#include <iostream>
using namespace std;
int power()
{
    int a, b;
    int ans = 1;
    cout << "Enter A and B\n";
    cin >> a >> b;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int answer = power();
    cout << "Answer is " << answer << endl;
    return 0;
}