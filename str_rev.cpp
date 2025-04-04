#include <iostream>
using namespace std;

void strrev(char a[], int l)
{
    int s = 0;
    int e = l - 1;
    while (s < e)
    {
        swap(a[s++], a[e--]);
    }
}

int getlength(char a[])
{
    int c = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        c++;
    }
    return c;
}

int main()
{
    char a[20];
    cout << "Enter str\n";
    cin >> a;
    int l = getlength(a);
    cout << "Length : " << l << endl;
    cout << "Reversed str : ";
    strrev(a, l);
    cout << a << endl;
    return 0;
}