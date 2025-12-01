#include <iostream>
using namespace std;
/*
float funcAverage(int a, int b){
    float avg = (a + b) / 2.0;
    return avg;
}

float funcAverage2(int a, float b){
    float avg = (a + b) / 2.0;
    return avg;
}
*/
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    float a;
    a = funcAverage(5, 2.5);
    // cout << "The average of 5 and 2 is " << a << endl;
    printf("The average of 5 and 2 is %.3f\n", a);

    /* float b;
     b = funcAverage2(5, 2.5);
     // cout << "The average of 5 and 2.5 is " << b << endl;
     printf("The average of 5 and 2.5 is %.3f\n", b);  */

    int x = 5, y = 7;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swapp(x, y);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    return 0;
}