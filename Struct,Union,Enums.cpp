// Structures, Union and enums..

#include<iostream>
using namespace std;
 typedef struct employee
 {
    /* data */
    int id;
    char favChar;
    float salary;

 }rdx;

 union money
 {
    /* data */
    int rice;
    char car;
    float pounds;
 };
 
 
int main(){

    // Union..
    union money m1;
    m1.rice = 40;
    m1.car = 'b';
    m1.pounds = 15.44;
    cout<<m1.pounds<<endl;
    cout<<m1.car<<endl; //Gives garbage result...
    cout<<m1.rice<<endl;  //Gives garbage result...

    // Structures..
    rdx rishabh;
    rishabh.id = 33;
    rishabh.favChar = 's' ;
    rishabh.salary = 1110.5;
 
    cout<<rishabh.id<<endl;
    cout<<rishabh.favChar<<endl;
    cout<<rishabh.salary<<endl;  

    // Enums..
   enum Meal{breakfast, lunch, dinner};
   Meal m2 = lunch;
   cout<<(m2 == dinner)<<endl;
   cout<<breakfast<<endl;
   cout<<lunch<<endl;
   cout<<dinner<<endl;

    return 0;
}