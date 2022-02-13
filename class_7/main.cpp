#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    

};

int main()
{

    Person p1;
    Person p2;
    p1.age = 20;
    p2.age = 30;

    cout << p1.age + p2.age;
    system("pause");
}