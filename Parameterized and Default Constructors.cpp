#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor Declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(int x, int y) // ----> It is a parameterized constructor as it accepets 2 parameters.
{
    a = x;
    b = y;
}

int main()
{

    // Implict call
    Complex a(1, 4);
    a.printNumber();

    // Explict call
    Complex b = Complex(2, 8);
    b.printNumber();

    return 0;
}