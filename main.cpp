#include <iostream>
using namespace std;

int main()
{
    int price, total = 0, counter = 0;
    while (true)
    {
        cout << "Enter Item price: ";
        cin >> price;
        if (price < 1)
            break;
        total += price;
        counter++;
    }

    cout << "You have " << counter << " items in your cart." << endl;
    cout << "Total price is " << total << "." << endl;

    // calculate 15% dicsount if total price is greater than 5000 or total products are greater than 10
    if (total > 5000 || counter > 10)
        total *= 0.85;
    
    cout << "Total price after discount is " << total << "." << endl;

    system("pause");
    return 0;
}