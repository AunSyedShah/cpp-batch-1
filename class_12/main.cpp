#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}


double sum(double a, double b) {
    return a + b;
}

int main() { 
    cout << sum(1.5, 2.6) << endl;


    system("pause");
    return 0; 
}