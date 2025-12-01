#include <iostream>
using namespace std;

template <class T>
class Rishabh
{
public:
    T data;
    Rishabh(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Rishabh<T>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatised func() " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am templatised func() " << a << endl;
}

int main()
{
    // Rishabh <float> r1(7.51);
    // Rishabh <char> r1('v');
    // Rishabh <int> r1(1);
    // cout << r1.data << endl;
    // r1.display();

    func(4);  // Exact match takes the highest priority
    func1(4); // Exact match takes the highest priority

    return 0;
}