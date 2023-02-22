#include <iostream>
using namespace std;

// Member Friend Functions in C++ :-
// Friend functions are those functions that have the access to private members of the class in
// which they are declared. The main thing to note here is that only that function can access the
// member function which is made a friend of the other class.

// Forward declaration :-
class complex;

// Friend Classes in C++ :-
// Friend classes are those classes that have permission to access private members of the class in
// which they are declared. The main thing to note here is that if the class is made friend of
// another class then it can access all the private members of that class.

class calculator
{
public:
    int sum(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex);
    int sumImgComplex(complex, complex);
};

class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void getdata(void)
    {
        cout << "Your Complex number is " << a << "+" << b << "i" << endl;
    }
    // Individually declaring functions of other class as friends :-
    // friend int calculator::sumRealComplex(complex o1, complex o2);
    // friend int calculator::sumImgComplex(complex o1, complex o2);

    // Aliter: Declaring the entire calculator class as friend :-
    friend class calculator;
};

int calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator::sumImgComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c2.setdata(3, 4);

    c1.getdata();
    c2.getdata();

    calculator calc;
    int resReal = calc.sumRealComplex(c1, c2);
    cout << "The sum of real part of c1 and c2 is " << resReal << endl;
    int resImg = calc.sumImgComplex(c1, c2);
    cout << "The sum of complex part of c1 and c2 is " << resImg << "i" << endl;
    return 0;
}