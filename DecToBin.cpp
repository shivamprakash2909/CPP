#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int ans = 0;
    int bit;
    while (n != 0)
    {
        bit = n & 1;

        n = n >> 1;
    }
    cout << bit << endl;

    return 0;
}
//     int r1, r2;
//     cout << "entr r1\n";
//     cin >> r1;
//     cout << "entr r2\n";
//     cin >> r2;

//     for (int i = r1; i <= r2; i++)
//     {
//         int c = 0;
//         for (int j = 1; j < i / 2; j++)
//         {
//             if (i % j == 0)
//             {
//                 c++;
//             }
//         }
//         if (c == 2)
//         {
//             cout << i << endl;
//         }
//         else
//         {
//             continue;
//         }
//     }
// }