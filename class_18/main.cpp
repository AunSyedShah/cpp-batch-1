#include <iostream>
using namespace std;

class Mammal
{
private:
    int age;

protected:
    int weight;

public:
    Mammal()
    {
        cout << "Mammals can give direct birth." << endl;
    }
    int getAge()
    {
        return age;
    }
};

class WingedAnimal
{
private:
    int age;
public:
    WingedAnimal()
    {
        cout << "Winged animal can flap." << endl;
    }
    // get age
    int getAge()
    {
        return age;
    }
};

class Bat : public Mammal, public WingedAnimal
{
};

int main()
{
    Bat b1;
    b1.Mammal::getAge();


    return 0;
}