#include <iostream>
using namespace std;
char tolowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool chk_palindrome(char a[], int l)
{
    int s = 0, e = l - 1;
    while (s < e)
    {
        if (a[s++] != a[e--])
        {
            return 0;
        }
    }
    return 1;
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
    cout << "Character : " << tolowercase('a') << endl;
    cout << "Character : " << tolowercase('C') << endl;
    cout << "palindrome or not ";
    cout << chk_palindrome(a, l);

    return 0;
}
