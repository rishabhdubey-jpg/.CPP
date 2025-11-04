// Functions and functions prototyping..

#include<iostream>
using namespace std;

int sum(int, int);
void g();

int main(){
    int num1, num2;
    cout<<"Enter first no. "<<endl;
    cin>>num1; 
    cout<<"Enter second no. "<<endl; 
    cin>>num2; 
    cout<<"The sum is "<<sum(num1,num2)<<endl; 
    g();
    return 0;
}

int sum(int a, int b){
    int c = a + b;
    return c; 
}

void g(void){
    cout<<"Hello, Good Morning..";
}