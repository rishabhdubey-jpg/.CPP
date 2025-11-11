#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the ID of the Employee:" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of this Employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void)
    {
        // cout<<id;  --> a nonstatic member not have the acces to be called by a satic func.
        cout << "The value of  count is " << count << endl;
    }
};

// Count is the static data member of class Employee..
int Employee::count; // Default initialise value is 0.

int main()
{
    Employee rishabh, sourabh, krishna;
    // rishabh.id=123;
    // rishabh.count=1;    // cannot do this as id and count are private

    rishabh.setData();
    rishabh.getData();
    Employee::getCount();

    sourabh.setData();
    sourabh.getData();
    Employee::getCount();

    krishna.setData();
    krishna.getData();
    Employee::getCount();

    return 0;
}