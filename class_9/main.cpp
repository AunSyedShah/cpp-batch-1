#include <iostream>
using namespace std;

// Base class / Super class / Parent Class
class Person
{
public:
    string name;
    int age;
};

// Derived class / Sub class / Child Class
// student class with public data members
class Student : public Person
{
public:
    int roll;
    float marks;
};

// teacher class with public data members
class Teacher: public Person
{
public:
    int id;
    float salary;
};

// Doctor class with public data members
class Doctor: public Person
{
public:
    int id;
    float salary;
};

int main()
{
    Student s;
    s.name = "John";
    s.age = 20;
    s.roll = 1;
    s.marks = 90.0;

    Teacher t;
    t.name = "Mary";
    t.age = 30;
    t.id = 2;
    t.salary = 30000.0;
    return 0;
}