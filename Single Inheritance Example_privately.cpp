#include <iostream>
using namespace std;

class Base
{
    int data1; // Private by default and is not inheritable
public:
    int data2;
    void setdata();
    int getData1();
    int getData2();
};
void Base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}

class Derived : private Base // Class is being derived privately
{
    int data3;

public:
    void process();
    void display();
};
void Derived ::process()
{
    setdata();  // We have to call setdata here bcuzz the class was inherited privately
    data3 = data2 * getData1();
}
void Derived ::display()
{
    cout << "The value of data1 is: " << getData1() << endl;
    cout << "The value of data 2 is: " << data2 << endl;
    cout << "The value of data 3 is: " << data3 << endl;
}

int main()
{
    Derived der;
    // der.setdata();
    der.process();
    der.display();

    return 0;
}