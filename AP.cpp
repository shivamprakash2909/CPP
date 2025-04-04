#include <iostream>
using namespace std;
void f(int x)
{
    int ans;
    for (int i = 1; i <= x; i++)
    {
        ans = ((3 * i) + 7);
        cout << ans << " ";
    }
}

int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;
    f(n);
    return 0;
}
// int count(int a)
// {
//     for (int i = 1; i <= a; i++)
//     {
//         cout << i;
//     }

//     cout << 50;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     count(n);
// }
