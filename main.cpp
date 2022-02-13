#include <iostream>
using namespace std;

class Person
{
public:
    int age;

    Person()
    {
        age = 10;
    }
};

class Student : public Person
{
public:
    Student()
    {
        age = 20;
    }
};

int main()
{
    Student noor;
    cout << noor.age << endl;

    system("pause");
    return 0;
}