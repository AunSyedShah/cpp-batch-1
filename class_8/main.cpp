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

    // person object using parameterized constructor
    Person p(20, "John");


    system("pause");
    return 0;
}