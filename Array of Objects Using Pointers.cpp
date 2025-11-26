#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is: " << id << endl
             << "Price of this item is: " << price << endl;
    }
};

/* Explaination of incrementation of ptr pointer, with ptrTemp pointer
    1  2  3
          ^
          |
         ptr
 ptrTemp

*/

int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int [34];

    // 1. General store items.
    // 2. Veggies items.
    // 3. Hardware items.

    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p, i;
    float q;

    for (i = 0; i < size; i++)
    {
        cout << "Enter the id and price of the item: " << endl;
        cin >> p >> q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++;
    }
    cout << endl; // Just for better displaying experience's.

    for (i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
        cout << endl;
    }

    return 0;
}