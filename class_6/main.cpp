#include <iostream>
using namespace std;

void sq(int x)
{
    cout << x * x << endl;
}

void welcome(string x){
    cout << "Welcome " << x << endl;
}

void address()
{
    cout << "Syed Softwares" << endl;
    cout << "DHA Phase-4, Karachi" << endl;
}

float percentage(float marks_obtained, float total_marks)
{
    cout << (marks_obtained / total_marks) * 100;
    return (marks_obtained / total_marks) * 100.0;
    // return (75.5 / 90.0) * 100.0;
}

int main() {
    sq(2);
    sq(3);
    sq(4);
    sq(5);
    welcome("Syed Aun");
    address();
    address();
    address();
    welcome("Syed Aun");
    address();

    percentage(75.5, 90);

    float x = percentage(75.5, 90);


    system("pause");
    return 0; 
}