#include <iostream>
using namespace std;

class hero
{

private:
    char level;
    int age;

public:
    int health;
    char GetLevel()
    {
        return level;
    }
    int GetAge()
    {
        return age;
    }
    void SetLevel(char ch)
    {
        level = ch;
    }
    void SetAge(int x)
    {
        age = x;
    }
};

int main()
{
    hero h1;
    h1.health = 70;
    h1.SetLevel('A');
    h1.SetAge(22);

    cout << "health: " << h1.health << endl;
    cout << "level: " << h1.GetLevel() << endl;
    cout << "age: " << h1.GetAge() << endl;

    // cout << "size : " << sizeof(h1);
    return 0;
}