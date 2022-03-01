#include <iostream>
using namespace std;

// Complex Number Class
class Complex
{
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0, double i = 0)
    {
        real = r;
        imaginary = i;
    }
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }

    Complex operator+(Complex &c)
    {
        Complex temp;
        temp.real = this->real + c.real;
        temp.imaginary = this->imaginary + c.imaginary;
        return temp;
    }
    Complex operator-(Complex &c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imaginary = imaginary - c.imaginary;
        return temp;
    }

    // Overloading the operator *
    Complex operator*(Complex &c)
    {
        Complex temp;
        temp.real = (real * c.real) - (imaginary * c.imaginary);
        temp.imaginary = (real * c.imaginary) + (imaginary * c.real);
        return temp;
    }
    // Overloading the operator /
    Complex operator/(Complex &c)
    {
        Complex temp;
        temp.real = (real * c.real) + (imaginary * c.imaginary);
        temp.imaginary = (imaginary * c.real) - (real * c.imaginary);
        return temp;
    }
};

int main()
{
    Complex c1(2, 3);
    Complex c2(3, 4);
    Complex c3 = c1 + c2;
    // 5 + 7i
    c3.display();
    Complex c4 = c1 - c2;
    c4.display();

    system("pause");
    return 0;
}