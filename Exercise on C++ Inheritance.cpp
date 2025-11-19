/*

Questions:

 We have to create 2 classes:

1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.

2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your chioice and displays the results using another function.

3. Create another class HybridCalculator and inherit it using these 2 classes

Also, answer the questions given below.

--> What type of Inheritance are you using?
--> Which mode of Inheritance are you using?
--> Create an object of HybridCalculator and display results of simple and scientific calculator.
--> How is code reusability implemented?

*/

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    int a, b;

public:
    void setNumbers_Simple(int x, int y)
    {
        a = x;
        b = y;
    }
};

class ScientificCalculator
{
protected:
    double x, y;

public:
    void setNumbers_Scientific(double p, double q)
    {
        x = p;
        y = q;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void displaySimpleResults()
    {
        cout << "Simple Calculator Results:" << endl;
        cout << "Addition: " << a + b << endl;
        cout << "Subtraction: " << a - b << endl;
        cout << "Multiplication: " << a * b << endl;
        if (b != 0)
        {
            cout << "Division: " << a / b << endl;
        }
        else
        {
            cout << "Division: Undefined (division by zero)" << endl;
        }
        cout << endl;
    }

    void displayScientificResults()
    {
        cout << "Scientific Calculator Results:" << endl;
        cout << "Power: " << pow(x, y) << endl;
        cout << "Square Root of first number: " << sqrt(x) << endl;
        cout << "Square Root of second number: " << sqrt(y) << endl;
        cout << "Logarithm of first number: " << log(x) << endl;
    }
};

int main()
{
    HybridCalculator calc;
    calc.setNumbers_Simple(10, 5);
    calc.displaySimpleResults();

    calc.setNumbers_Scientific(10.0, 5.0);
    calc.displayScientificResults();

    return 0;
}

/*
    --> We are using multiple inheritance.
    --> We using the public mode of inheritance.
    --> We using the reusability concept as we call the inputs and displays functions of two different classes from
        one another class called HybridCalculator.
*/