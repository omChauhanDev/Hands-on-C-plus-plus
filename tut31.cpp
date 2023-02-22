#include <iostream>
using namespace std;

// Constructor Overloading in C++ :-
// Constructor overloading is a concept in which one class can have multiple constructors with different parameters.
// The main thing to note here is that the constructors will run according to the arguments for example
// if a program consists of 3 constructors with 0, 1, and 2 arguments,
// so if we pass 1 argument to the constructor the compiler will automatically run the constructor which is taking 1 argument.
// Example :-

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printNumber(void)
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1;
    c1.printNumber();

    complex c2(2);
    c2.printNumber();

    complex c3(6, 8);
    c3.printNumber();

    return 0;
}