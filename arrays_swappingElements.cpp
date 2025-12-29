// Swapping the elements of a array.

#include <iostream>
using namespace std;

void traversalArray(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Using Call by Reference using c++ reference variables.
char swapRefVar(char arr[], int size, char &ind1, char &ind2)
{
    int temp = ind1;
    ind1 = ind2;
    ind2 = temp;
    return arr[size];
}

// Call by Reference using Pointers..
char swapPointer(char arr[], int size, char *ind1, char *ind2)
{
    int temp = *ind1;
    *ind1 = *ind2;
    *ind2 = temp;
    return arr[size];
}
int main()
{
    int size = 5;
    char arr[size] = {'a', 'b', 'c', 'd', 'e'};
    traversalArray(arr, 5);

    // arr[size] = swapRefVar(arr, 5, arr[0], arr[4]);
    // traversalArray(arr, 5);

    arr[size] = swapPointer(arr, 5, &arr[0], &arr[4]);
    traversalArray(arr, 5);

    return 0;
}