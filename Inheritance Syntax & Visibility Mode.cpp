#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 38.0;
    }
    Employee() {}
};

/* Derived Class syntax 

class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
   class members/methods/etc...
}
 Note:
 1. Default visibility mode is private.
 2. Public visilibility mode: Public members of the base class becomes Public members of the derived class
 3. Private visilibility mode: Public members of the base class becomes Private members of the derived class
 4. Private members are never inherited
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee rishabh(1), sourabh(2);
    cout << rishabh.salary << endl;
    cout << sourabh.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}
