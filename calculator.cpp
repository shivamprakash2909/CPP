#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter value of a\n";
    cin >> a;
    "\n";

    cout << "Enter value of b\n";
    cin >> b;
    "\n";

    char op;
    cout << "Enter the type of operation\n";
    cin >> op;
    "\n";

    switch (op)
    {
    case '+':
        cout << "(a + b) = " << (a + b) << endl;
        break;
    case '-':
        cout << "(a - b) = " << (a - b) << endl;
        break;
    case '*':
        cout << "(a * b) = " << (a * b) << endl;
        break;
    case '/':
        cout << "(a / b) = " << (a / b) << endl;
        break;
    case '%':
        cout << "(a % b) = " << (a % b) << endl;
        break;
    default:
        "please enter a valid operation\n";
    }

    return 0;
}
