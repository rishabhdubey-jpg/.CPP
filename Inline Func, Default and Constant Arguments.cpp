// Inline functions, Default arguments and Constant arguments

#include<iostream>
using namespace std;

inline int product(int a, int b){   // It is just a request to the compiler.
  /* It is used to reduce the runtime and to increase the efficiency of the code, by calling the funcn multiple times */
  // Not recommended to use below lines with inline functions.
  //  static int c = 0;    // This executes only once.
  // c = c + 1;  // Next time the function is run, the value of c will retained.
    return a*b; 
}
  float moneyReceived(int currentMoney, float factor=1.04) {  // Default Arguments: i.e, factor here.
    return currentMoney * factor;
  }  
  
  /* int strlen(const char *p){   // Constant Arguments: if want to make any variable, a constant.

  }*/

int main(){
    int a, b;
   /* cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;  */
  int money = 100000;
  cout<<"If u have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year."<<endl;  
  cout<<"For VIPs: If u have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money, 1.1)<<" Rs after 1 year."<<endl;  
    
    return 0;
}