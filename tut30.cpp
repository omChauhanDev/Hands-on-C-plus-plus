#include <iostream>
using namespace std;

// Parameterized and Default Constructors in C++
// Parameterized constructors are those constructors that take one or more parameters.
// Default constructors are those constructors that take no parameters.
// The main things to note here are that constructors are written in the public section
// of the class and the constructors don’t have a return type.

class complex
{
    int a, b;

public:
    complex(int, int); // Constructor Declaration
    void printComplex(void)
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
};

complex ::complex(int x, int y) // This is a parameterised constructor as it takes
// two parameters.
{
    a = x;
    b = y;
}

int main()
{
    // Implicit Call
    complex c1(4, 5);
    c1.printComplex();

    // Explicit Call
    complex c2 = complex(2, 8);
    c2.printComplex();
    return 0;
}