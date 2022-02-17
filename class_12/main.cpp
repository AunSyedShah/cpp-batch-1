#include <iostream>
using namespace std;

class Person
{
private:
    int age;
    string name;

public:
    // getter
    int getAge()
    {
        return this->age;
    }
    // setter
    void setAge(int age)
    {
        this->age = age;
    }
    // getter and setter for name
    string getName()
    {
        return this->name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    // Default constructor
    Person()
    {
        this->age = 0;
        this->name = "";
    }
    // Parameterized constructor
    Person(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
    // Copy constructor
    Person(const Person &p)
    {
        this->age = p.age;
        this->name = p.name;
    }
};

int main()
{
    
    Person *p1 = new Person();
    // priting address of p1
    cout << "Address of p1: " << p1 << endl;
    p1->setName("John");

    // copy p1 to p2
    Person *p2 = new Person();
    p2 = p1;
    // printing address of p2
    cout << "Address of p2: " << p2 << endl;


    // copying p1 to p2 using copy constructor
    // printing address of p2
    cout << "Address of p2: " << p2 << endl;
    // printing address of p1
    cout << "Address of p1: " << p1 << endl;

    cout << p2->getName() << endl;

    p2->setName("Jane");
    cout << p2->getName() << endl;

    cout << "P1 Name: " << p1->getName() << endl;

    system("pause");
    return 0;
}