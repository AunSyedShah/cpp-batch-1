#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    string name;
    // default constructor
    Person()
    {
        age = 10;
        name = "student";
    }
    // parameterized constructor
    Person(int a, string n)
    {
        age = a;
        name = n;
    }
};

int main()
{
    // static memory allocation
    int age = 24;
    // dyamic memory allocation
    int *agePtr = new int;
    *agePtr = 25;
    delete agePtr;
    *agePtr = 26;
    cout << agePtr << endl;


    system("pause");
    return 0;
}