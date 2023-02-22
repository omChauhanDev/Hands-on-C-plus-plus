// Using default arguments concept in constructor overloading.
#include <iostream>
using namespace std;

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
    complex(int x, int y = 9)
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

    // complex c2(2);
    // c2.printNumber();
    // Objech c2 has fullfilling the conditions of two constructors so the compilier will get
    // confused to run which constructor for this object and it will show error.

    complex c3(6, 8);
    c3.printNumber();

    return 0;
}