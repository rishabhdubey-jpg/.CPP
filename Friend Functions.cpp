#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }

    // Below line means that a non-member sumComplex function is allowed to do anything with my private parts(members).
    friend Complex sumComplex(Complex o1, Complex o2);

    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex sumComplex(Complex o1, Complex o2){      // Not in the scope of the class.
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3; 
}

int main(){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();
    
    c2.setNumber(5, 8);
    c2.printNumber();
    
    // c1.sumComplex();    --> since the function is not in the scope of the class, so it cannot be called from the object of the class.
    sum = sumComplex(c1, c2);  // can be invoked without the help of any object.
    sum.printNumber();

    return 0;
}