#include<iostream>
using namespace std;

class Animal
{
    private:
    int age, height;
    public:
    char Bread;
    string category;
    void setData(int a, int b);
    void getData(){
        cout<<"\nCategory: "<<category<<endl;
        cout<<"Bread "<<Bread<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Height: "<<height<<endl;
    }
};

void Animal::setData(int a, int b){
    age=a;
    height=b;

}


int main(){
    Animal Dog;
    Dog.Bread='A';
    Dog.category="Dog";
    Dog.setData(5, 3);
    Dog.getData();

    Animal Cat;
    Cat.Bread='B';
    Cat.category="Cat";
    Cat.setData(3, 2);
    Cat.getData();

    Animal Lion;
    Lion.Bread='A';
    Lion.category="Lion";
    Lion.setData(5,4);
    Lion.getData();

    return 0;
}