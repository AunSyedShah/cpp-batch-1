#include <iostream>
using namespace std;

int main() { 
    int total = 0;
    int price;
    int counter = 0;
    while (true)
    {
        cout << "Enter Item Price: ";
        cin >> price;
        if (price < 1)
        {
            break;
        }
        else
        {
            total += price;
            counter++;
        }
    }
    cout << "Total: " << total << endl;
    cout << "Number of Items: " << counter << endl;
    

    system("pause");
    return 0; 
}