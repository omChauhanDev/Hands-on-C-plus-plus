#include <iostream>
using namespace std;

// Constructors in C++ :-
// A constructor is a special member function with the same name as the class.
// A constructor does not have a return type.
// Constructors are used to initialize the objects of its class.
// Constructors are automatically invoked whenever an object is created.

// Important Characteristics of Constructors in C++ :-
// 1. A constructor should be declared in the public section of the class.
// 2. They are automatically invoked whenever an object is created.
// 3. They do not return values and do not have return types.
// 4. It can have default arguements.
// 5. We can not refer to thier address.

class complex
{
    int a, b;

public:
    complex(void); // Constructor Declaration
    void printdata(void)
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
};

complex ::complex(void) // This is called default constructor as accepts no
// parameter.
{
    a = 0;
    b = 0;
}

int main()
{
    complex c1, c2, c3;
    c1.printdata();
    c2.printdata();
    c3.printdata();

    return 0;
}