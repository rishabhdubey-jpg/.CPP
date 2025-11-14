#include <iostream>
using namespace std;

class Simple
{
    int data1, data2, data3;

public:
    Simple(int a = 2, int b = 4, int c = 6) // Default Arguments
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};

void Simple::printData()
{
    cout << "Your data1, data2 and data3 are: " << data1 << ", " << data2 << " and " << data3 << endl;
}

int main()
{
    Simple s(12);
    s.printData();

    return 0;
}