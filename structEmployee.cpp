#include <iostream>
using namespace std;

typedef struct Employee
{
    string post;
    int id;
    float salary;
    char block;
    string joiningDate;
} emp;

int main()
{
    emp krishna;
    krishna.post = "Software Engineer";
    krishna.id = 101;
    krishna.block = 'A';
    krishna.salary = 45000;
    krishna.joiningDate = "10-06-2024";

    emp sourabh;
    sourabh.post = "Data Analyst";
    sourabh.id = 102;
    sourabh.block = 'C';
    sourabh.salary = 35000;
    sourabh.joiningDate = "01-11-2025";

    emp abhishek;
    abhishek.post = "Sales Manager";
    abhishek.id = 103;
    abhishek.block = 'E';
    abhishek.salary = 61000;
    abhishek.joiningDate = "07-05-2022";

    emp vansh;
    vansh.post = "Software Developer";
    vansh.id = 104;
    vansh.block = 'B';
    vansh.salary = 39000;
    vansh.joiningDate = "29-03-2023";

    emp sameer;
    sameer.post = "Data Scientist";
    sameer.id = 105;
    sameer.block = 'F';
    sameer.salary = 68000;
    sameer.joiningDate = "30-03-2020";

    cout << "Krishna's Details: " << endl
         << "Post: " << krishna.post << endl
         << "ID: " << krishna.id << endl
         << "Block: " << krishna.block << endl
         << "Salary: " << krishna.salary << " Rs." << endl
         << "Joining (day-mon-yr): " << krishna.joiningDate << endl
         << endl;

    cout << "Sourabh's Details: " << endl
         << "Post: " << sourabh.post << endl
         << "ID: " << sourabh.id << endl
         << "Block: " << sourabh.block << endl
         << "Salary: " << sourabh.salary << " Rs." << endl
         << "Joining (day-mon-yr): " << sourabh.joiningDate << endl
         << endl;

    cout << "Abhishek's Details: " << endl
         << "Post: " << abhishek.post << endl
         << "ID: " << abhishek.id << endl
         << "Block: " << abhishek.block << endl
         << "Salary: " << abhishek.salary << " Rs." << endl
         << "Joining (day-mon-yr): " << abhishek.joiningDate << endl
         << endl;

    cout << "Vansh's Details: " << endl
         << "Post: " << vansh.post << endl
         << "ID: " << vansh.id << endl
         << "Block: " << vansh.block << endl
         << "Salary: " << vansh.salary << " Rs." << endl
         << "Joining (day-mon-yr): " << vansh.joiningDate << endl
         << endl;

    cout << "Sameer's Details: " << endl
         << "Post: " << sameer.post << endl
         << "ID: " << sameer.id << endl
         << "Block: " << sameer.block << endl
         << "Salary: " << sameer.salary << " Rs." << endl
         << "Joining (day-mon-yr): " << sameer.joiningDate << endl
         << endl;

    return 0;
}