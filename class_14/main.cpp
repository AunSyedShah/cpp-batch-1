#include <iostream>

using namespace std;

class Person {
    public:
    int age;
    // default constructor
    Person() {
        age = 0;
    }
    // constructor with parameter
    Person(int age) {
        this->age = age;
    }
    // copy constructor
};


int main() { 
    
    Person *p1 = new Person();
    p1->age = 10;
    
    // deep copy of p1
    Person *p2 = new Person(*p1);
    p2->age = 20;



    system("pause");


    return 0; 
}