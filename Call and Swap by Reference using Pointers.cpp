// Call by Reference, Swap by reference using pointers and address...

#include<iostream>
using namespace std;
// This will not swap a and b
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
// Call by Reference using Pointers..
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Call by Reference using c++ reference variables
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 4, y = 5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
 // swap(x, y); // This will not swap a amd b.
  //  swapPointer(&x, &y); // This will swap a and b using pointers.
  swapReferenceVar(x, y);  // This will swap a and b using C++ reference variables.
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}