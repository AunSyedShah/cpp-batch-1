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

    if(b == 0)
    {
        cout << "Division by zero is not possible\n";
    }
    else
    {
        cout << "Result: " << a / b << endl;
    }

    system("pause");
    return 0;
}