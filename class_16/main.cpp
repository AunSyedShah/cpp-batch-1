#include <iostream>
using namespace std;

// function template for adding two numbers
template <class T>
T add(T a, T b)
{
    return a + b;
}

// function template for calculating percentage
template <class T>
T percentage(T a, T b)
{
    return (a * 100) / b;
}

// function template for printing any value
template <class T>
void print(T a)
{
    cout << a << endl;
}

template <typename T>
T getInput()
{
    T x;
    cin >> x;
    return x;
}

int main()
{
    // integer values
    cout << add(10, 20) << endl;
    // float values
    cout << add(10.25, 20.85) << endl;
    // for strings
    cout << add('a', 'a') << endl;

    // percentage of two numbers
    cout << percentage(10, 20) << endl;
    cout << percentage(10.25, 20.85) << endl;

    print("noor");
    print(25);

    // get input from user
    int x;
    x = getInput<int>();

    system("pause");
    return 0;
}