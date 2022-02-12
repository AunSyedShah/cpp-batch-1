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
    cout << "Enter Name: ";
    string name;
    cin >> name;
    cout << "Enter Age: ";
    int age;
    cin >> age;

    // person object using parameterized constructor
    Person p(age, name);


    system("pause");
    return 0;
}