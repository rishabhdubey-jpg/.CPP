// An example of friend function with call by reference concept

#include<iostream>
using namespace std;

class c2 ; // Forward Declaration
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);
    public:
    void inData(int a)
    {
        val1 = a;
    }
    void Display()
    {
        cout<< val1 << endl;
    } 
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);
    public:
    void inData(int a)
    {
        val2 = a;
    }
    void Display()
    {
        cout<< val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main(){
    c1 oc1;
    c2 oc2;
    int n1 = 37;
    int n2 = 64;
    
    cout<< "Respectively, the values of c1 and c2 BEFORE exchanging are: " << n1 << " and " << n2 <<endl;
    oc1.inData(n1);
    oc2.inData(n2);
    exchange(oc1, oc2);

    cout<< "The value of c1 AFTER exchanging becomes: " ;
    oc1.Display();
    cout<< "The value of c2 AFTER exchanging becomes: " ;
    oc2.Display();

    return 0;
}