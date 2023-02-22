#include <iostream>
using namespace std;

// Friend Function in C++ :-
// Friend functions are those functions that have the right to access the
// private data members of class even though they are not defined inside the class.
// It is necessary to write the prototype of the friend function.
// One main thing to note here is that if we have written the prototype for the
// friend function in the class it will not make that function a member of the class.

// Properties of Friend Function in C++ :-
// ----> Not in the scope of class.
// ----> Since it is not in the scope of class so it cannot be called from the object
//       of that class.Eg:-
//       c3.sumComplex(c1, c2); //Invalid syntax
// ----> Can be invoked without the help of any object.
// ----> Usually contain the objects as arguements.
// ----> Can be declared inside private or public section of the class.
// ----> It can not access the members directly by their names and need
//       object_name.member_name to access any member.

class complex
{
    int a;
    int b;

public:
    friend complex sumComplex(complex o1, complex o2);
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void getData(void)
    {
        cout << "Your Complex number is " << a << "+" << b << "i" << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, c3;
    c1.setData(2, 4);
    c1.getData();

    c2.setData(6, 8);
    c2.getData();

    // c3.sumComplex(c1, c2) //This throws an error
    // Because it is not in the scope of the class,
    // it cannot be called from the object of that class.

    c3 = sumComplex(c1, c2);
    c3.getData();

    return 0;
}