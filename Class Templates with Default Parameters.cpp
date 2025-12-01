#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Rishabh
{
public:
    T1 a;
    T2 b;
    T3 c;
    Rishabh(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display(void)
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
    }
};

int main()
{
    Rishabh<> r1(4, 2.89, 'r'); // Default parameters will be used
    r1.display();

    cout << endl;

    Rishabh<float, char, char> r2(3.77, 'V', 's'); // User-defined parameters will be used
    r2.display();
    return 0;
}