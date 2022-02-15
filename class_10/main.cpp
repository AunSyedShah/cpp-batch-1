#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    void work(){
        cout << "Person work" << endl;
    }
};

class Teacher : public Person
{
public:
    void work()
    {
        cout << "I am teaching" << endl;
    }
};

class Student : public Person
{
    public:
    void work()
    {
        cout << "I am studying" << endl;
    }
};

// Main function for the program
int main()
{
    Teacher t;
    Student s;
    Person p;
    t.work();
    s.work();
    p.work();

    system("pause");
    return 0;
}