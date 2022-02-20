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
    // printing age of p1 before copying
    cout << "Age of p1 before copying: " << p1->age << endl;
    // copying p1 to p2
    Person *p2 = p1;
    // printing age of p2 after copying
    cout << "Age of p2 after copying: " << p2->age << endl;

    p2->age = 20;
    // printing age of p1 after changing age of p2
    cout << "Age of p1 after changing age of p2: " << p1->age << endl;

    // print address of p1 and p2
    cout << "Address of p1: " << p1 << endl;
    cout << "Address of p2: " << p2 << endl;



    system("pause");


    return 0; 
}