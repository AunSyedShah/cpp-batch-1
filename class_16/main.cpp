#include <iostream>
using namespace std;

// function overloading for integer
int add(int a, int b)
{
    return a + b;
}

// function overloading for float
float add(float a, float b)
{
    return a + b;
}

// function overloading for double
double add(double a, double b)
{
    return a + b;
}

int main()
{
    cout << add(10, 20);

    system("pause");
    return 0;
}