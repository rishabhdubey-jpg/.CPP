#include <iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int  j) : a(i), b(a +j)    // you can also use one parameter to initialize another
    // Test(int i, int j) : a(i), b(2*j)     // you can also use expressions
    // Test(int i, int j) : b(j), a(i + b)  // order of initialization is according to the order of declaration not the order in initialization list
    Test(int i, int j) : a(i)
    {
        b = j; // you can also assign values in the constructor body
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
