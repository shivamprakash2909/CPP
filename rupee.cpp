#include <iostream>
using namespace std;
int main()
{
    int amount;
    int num;
    int x;
    cout << "Enter amount\n";
    cin >> amount;
    "\n";
    cin >> x;
    "\n";
    switch (x)
    {
    case 0:
        cout << "Calculating number of notes required....\n";
    // 100 rupee
    case 100:
        num = amount / 100;
        cout << "Number of 100 note: " << num << endl;
        amount = amount % 100;
    // 50 rupee
    case 50:
        num = amount / 50;
        cout << "Number of 50 note: " << num << endl;
        amount = amount % 50;
        // 20 rupee
    case 20:
        num = amount / 20;
        cout << "Number of 20 note: " << num << endl;
        amount = amount % 20;
        // 10 rupee
    case 10:
        num = amount / 10;
        cout << "Number of 10 note: " << num << endl;
        amount = amount % 10;
        // 1 rupee
    case 1:
        num = amount / 1;
        cout << "Number of 1 coin: " << num << endl;
        amount = amount % 1;
    }

    return 0;
}