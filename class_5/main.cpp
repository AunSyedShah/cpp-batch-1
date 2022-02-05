#include <iostream>
using namespace std;

int main() { 
    // what is a pointer?
    // a pointer is a variable that holds the address of another variable

    // what is the address of a variable?
    // the address of a variable is the memory location of the variable

    // how do we get the address of a variable?
    // we use the & operator
    // example of getting the address of a variable:

    // int x = 5;
    // int *ptr = &x;
    // cout << ptr << endl;
    // cout << *ptr << endl;


    // what is array?
    // an array is a collection of variables of the same type
    /*
    int ages[10];
    ages[0] = 10;
    ages[1] = 20;
    ages[2] = 30;
    ages[3] = 40;
    ages[4] = 50;
    ages[5] = 60;
    ages[6] = 70;
    ages[7] = 80;
    ages[8] = 90;
    ages[9] = 100;

    cout << ages[0] << endl;
    cout << &ages[0] << endl;
    cout << &ages[1] << endl;
    cout << &ages[2] << endl;
    cout << &ages[3] << endl;
    cout << &ages[4] << endl;
    */

   int marks[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
   int *marksPtr = marks;
   cout << *(++marksPtr) << endl;
   cout << *(++marksPtr) << endl;

   // dynamic memory allocation
   // static memory allocation


    system("pause");
    return 0; 
}