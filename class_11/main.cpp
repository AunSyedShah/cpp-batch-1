#include <iostream>
using namespace std;

class Person{
    private:
    string _name;
    int _age;
    public:
    // default constructor
    Person(){
        _name = "";
        _age = 0;
    }
    // parameterized constructor
    Person(string name, int age){
        _name = name;
        _age = age;
    }

    // setter and getter for all private variables using this operator
    void setName(string name){
        this->_name = name;
    }
    string getName(){
        return this->_name;
    }
    void setAge(int age){
        this->_age = age;
    }
    int getAge(){
        return this->_age;
    }
    // print function
    virtual void print(){
        cout << "Name: " << this->getName() << endl;
        cout << "Age: " << this->getAge() << endl;
    }
};

class Student:public Person{
    private:
    string _course;
    public:
    // default constructor
    Student(){
        _course = "";
    }
    // setter and getter for all private variables using this operator
    void setCourse(string course){
        this->_course = course;
    }
    string getCourse(){
        return this->_course;
    }
    // print function
    void print(){
        cout << "Name: " << this->getName() << endl;
        cout << "Age: " << this->getAge() << endl;
        cout << "Course: " << this->getCourse() << endl;
    }
};

int main() { 
    Person *p;
    p = new Student();
    p->print();

    system("pause");
    return 0; 
}