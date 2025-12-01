#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    // Ways to create a list
    list<int> list1; // List of 0 length
    list1.push_back(5);
    list1.push_back(9);
    list1.push_back(11);
    list1.push_back(3);
    list1.push_back(15);
    display(list1);

    // list1.pop_back(); // removes last element
    // display(list1);

    // Removing elements from the list
    /*  list1.pop_front();
        list1.pop_front();
        list1.remove(9);  */

    // Sorting the list
    /*  list1.sort();
        display(list1);  */

    // Reversing the list
    list1.reverse();
    display(list1);

    list<int> list2(3); // Empty list of size 3
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 8;
    iter++;
    *iter = 9;
    display(list2);

    list1.merge(list2); // Merges list2 into list1
    cout << "List1 after merging with list2: ";
    display(list1);

    return 0;
}