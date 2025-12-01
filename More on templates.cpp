#include <iostream>
using namespace std;

template <class T1, class T2>
class Complex
{
public:
    T1 real;
    T2 imaginary;
    Complex(T1 a, T2 b)
    {
        real = a;
        imaginary = b;
    }
    void display(void)
    {
        cout << "The Complex number is: " << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    Complex<int, float> obj(2, 3.14);
    obj.display();
    return 0;
}