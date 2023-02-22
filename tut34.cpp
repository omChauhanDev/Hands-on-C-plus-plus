#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, then complier suplies its own copy
    // constructor.
    number(number &obj)
    {
        cout << "Copy constructor called !!!" << endl;
        a = obj.a;
    }
    void show()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    number x, y, z(48), z2;
    x.show();
    y.show();
    z.show();

    number z1(z); // Copy constructor invoked.
    z1.show();

    z2 = z; // Copy constructor not invoked.
    z2.show();

    number z3 = z;
    z3.show(); // Copy constructor invoked.

    return 0;
}