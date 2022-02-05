#include <iostream>
using namespace std;

int main() { 
    cout << "Enter Your Name: ";
    string name;
    cin >> name;
    // clear the screen
    system("cls");
    cout << "Hello " << name << endl;

    system("pause");
    return 0; 
}