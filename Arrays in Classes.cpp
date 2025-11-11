#include<iostream>
using namespace std;

class Shop{
    int itemID[100];
    int itemPrice[100];
    int counter;
    public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void){
    cout<<"Enter the ID of your item no. "<<counter+1<<endl;
    cin>>itemID[counter];
    cout<<"Enter the price of your item:"<<endl;
    cin>>itemPrice[counter];
    counter ++;
}

void Shop::displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of item with ID "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}