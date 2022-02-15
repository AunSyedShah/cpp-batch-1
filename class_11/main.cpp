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
    void print(){
        cout << "Name: " << this->getName() << endl;
        cout << "Age: " << this->getAge() << endl;
    }
};

int main() { 
    cout << "Enter Number 1: ";
    int num1;
    cin >> num1;
    cout << "Enter Number 2: ";
    int num2;
    cin >> num2;
    cout << num1 / num2 << endl; 

    system("pause");
    return 0; 
}