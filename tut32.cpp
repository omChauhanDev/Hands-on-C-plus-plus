#include <iostream>
using namespace std;

// Constructors with Default Arguments in C++ :-
// Default arguments of the constructor are those which are provided in the constructor declaration.
// If the values are not provided when calling the constructor the constructor
// uses the default arguments automatically.

class simple
{

    int data1, data2, data3;

public:
    // Note:- We can give default values to the constructor at the time of decleration or at the time of defining
    //        a constructor.
    simple(int a, int b, int c);

    void printData(void)
    {
        cout << "The value of data1 is " << data1 << endl;
        cout << "The value of data2 is " << data2 << endl;
        cout << "The value of data3 is " << data3 << endl;
    }
};

simple::simple(int a, int b = 0, int c = 0)
{
    data1 = a;
    data2 = b;
    data3 = c;
}

int main()
{
    simple s1(8);
    s1.printData();
    return 0;
}