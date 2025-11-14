#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 1;
        b = 1;
    }

    Complex(int x)
    {
        a = x;
        b = 1;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    void printNumber();
};

void Complex :: printNumber()
{
    cout << "Your number is " << a << " + " << b << "i" << endl;
}

int main()
{
    Complex c1;
    c1.printNumber();

    Complex c2(2);
    c2.printNumber();

    Complex c3(3, 3);
    c3.printNumber();

    return 0;
}
 
  