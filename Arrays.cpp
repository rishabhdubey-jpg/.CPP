// Arrays...

#include<iostream>
using namespace std;

int main(){
    int marks[4]  = {34, 55, 68, 31 };
    cout<<"Using For loop:"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"The marks of "<< i<<" is: "<< marks[i]<<endl;

    }
    cout<<endl<<"Using While loop:"<<endl;
    int i = 0;
    while ( i < 4)
    {
        cout<<"The marks of "<< i<<" is: "<< marks[i]<<endl;
        i++;
    }
    cout<<endl<<"Using Do-While loop:"<<endl;
    i = 0;
    do
    {
        cout<<"The marks of "<< i<<" is: "<< marks[i]<<endl;
        i++;
    } while (i<4);
    
    return 0;
}