#include <iostream>
using namespace std;

class Person
{
public:
    int age;
};

class Teacher : public Person
{
public:
    int salary;
};

class Student : public Person
{
public:
    int marks;
};
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}