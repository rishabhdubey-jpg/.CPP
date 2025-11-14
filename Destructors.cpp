#include <iostream>
using namespace std;

// Destructors never takes an argument nor does it return any value
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for the object number: " << count << endl;
    }

    ~num()
    {
        cout << "This is the time when my destructor is called for the object number: " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside in the main func" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting the block" << endl;
    }
    cout << "Back to the main func" << endl;
    return 0;
}