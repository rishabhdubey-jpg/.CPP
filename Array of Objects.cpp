#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
    void setId(void){
        salary=122;
        cout<<"Enter the Id of the Employee:"<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"The Id of this Employee is "<<id<<endl;
    }
};

int main(){
   /* Employee rishabh, sourabh, krishna;
    rishabh.setId();
    rishabh.getId();  */

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    
    return 0;
}