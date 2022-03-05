#include <iostream>
using namespace std;

// friend function
class CurrentAccount
{
private:
    int balance;

public:
    // setter
    void setBalance(int b)
    {
        balance = b;
    }
    // getter
    int getBalance()
    {
        return balance;
    }
    // friend function
    friend void deposit(CurrentAccount &c, int amount);
};
void deposit(CurrentAccount &c, int amount)
{
    c.balance += amount;
}

int main()
{
    CurrentAccount c;
    c.setBalance(1000);
    deposit(c, 500);
    system("pause");
    return 0;
}