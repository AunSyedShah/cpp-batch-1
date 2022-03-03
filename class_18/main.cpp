#include <iostream>
using namespace std;

// multilevel inheritance example
class A
{
public:
    A()
    {
        cout << "A()" << endl;
    }
    ~A()
    {
        cout << "~A()" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B()" << endl;
    }
    ~B()
    {
        cout << "~B()" << endl;
    }
};

class C : public B
{
public:
    C()
    {
        cout << "C()" << endl;
    }
    ~C()
    {
        cout << "~C()" << endl;
    }
};

int main()
{
    


    return 0;
}