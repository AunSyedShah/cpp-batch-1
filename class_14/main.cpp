#include <iostream>
#include <vector>
#include <list>

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
    
    // integer list
    list<int> int_list;
    int_list.push_back(1);
    int_list.push_back(2);
    int_list.push_back(3);
    // itteraing through the list
    list<int>::iterator it = int_list.begin();
    it++;



    system("pause");


    return 0; 
}