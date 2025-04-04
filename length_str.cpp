#include <iostream>
using namespace std;
int getlength(char arr[])
{
    int c = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        c++;
    }
    return c;
}

int main()
{
    char arr[20];
    cout << "Enter string\n";
    cin >> arr;

    cout << "total number of words in string : " << getlength(arr) << endl;
    return 0;
}