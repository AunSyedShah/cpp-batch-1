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

    try
    {
        if(b == 0)
        {
            throw b;
        }
    }
    catch(int b)
    {
        cout << "Division by zero is not possible" << endl;
    }
    

    system("pause");
    return 0;
}