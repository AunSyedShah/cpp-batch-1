#include <iostream>
using namespace std;

// template class
template <class T>
class Number
{
private:
    T num;

public:
    // default constructor
    Number()
    {
        num = 0;
    }
    // parameterized constructor
    Number(T n)
    {
        num = n;
    }
    void print()
    {
        cout << num << endl;
    }
};

int main()
{
    Number <int> n1;
    n1.print();
    Number <float> n2(3.14);
    n2.print();
    Number <char> n3('a');
    n3.print();
    return 0;

    system("pause");
    return 0;
}