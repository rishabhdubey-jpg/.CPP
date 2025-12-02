#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    // Function objects (Functors): Function wrapped in a class so that it available like an object.
    int arr[] = {22, 3, 89, 1, 33, 101};
    // sort(arr, arr+6);
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
