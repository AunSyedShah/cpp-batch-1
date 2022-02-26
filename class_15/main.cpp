#include <iostream>
using namespace std;

int main()
{

    cout << "Enter First Number: ";
    int a;
    cin >> a;
    cout << "Enter Second Number: ";
    int b;
    cin >> b;


    // exception handling using try catch for a and b

    try
    {
        if (a == 0 || b == 0)
        {
            throw "Division by zero";
        }
        else
        {
            cout << "Result: " << a / b << endl;
        }
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }

    system("pause");
    return 0;
}