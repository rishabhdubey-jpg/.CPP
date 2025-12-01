#include <iostream>
#include <map>
#include <string>

using namespace std;

// Map is an associative array.
int main()
{
    map<string, int> marksMap;
    marksMap["Rohit"] = 90;
    marksMap["Shubham"] = 85;
    marksMap["Ankit"] = 78;

    marksMap.insert({{"Ashish", 88}, {"Sanket", 92}});
    map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }

    cout << "The size of the map is: " << marksMap.size() << endl;
    cout << "The max size of the map is: " << marksMap.max_size() << endl;
    cout << "The empty status of the map is: " << marksMap.empty() << endl;

    return 0;
}