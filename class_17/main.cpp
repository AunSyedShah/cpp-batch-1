#include <iostream>
using namespace std;

// class to explain the concept of friend function
class A
{
private:
    int a;

public:
    A(int x)
    {
        a = x;
    }
    friend void display(A obj);
};

void display(A obj)
{
    cout << "Value of a is " << obj.a << endl;
}

int main()
{
    display(A(10));
    system("pause");
    return 0;
}