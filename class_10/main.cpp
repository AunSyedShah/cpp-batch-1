#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    void work()
    {
        cout << "I am working" << endl;
    }
};

int main()
{
    // integer takes 4 bytes
    int *x = new int();

    // normal array declaration
    int y[10];

    // array declaration with pointers
    int *arrPtr = new int[10];

    system("pause");
    return 0;
}