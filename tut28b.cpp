#include <iostream>
using namespace std;

class c2; // Forward Declaration.

class c1
{
    friend void exchange(c1 &o1, c2 &o2);
    int val1;

public:
    void setdata(int a)
    {
        val1 = a;
    }
    void displaydata(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    friend void exchange(c1 &o1, c2 &o2);
    int val2;

public:
    void setdata(int a)
    {
        val2 = a;
    }
    void displaydata(void)
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &o1, c2 &o2)
{
    int temp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = temp;
}
int main()
{
    c1 oc1;
    c2 oc2;

    oc1.setdata(45);
    oc2.setdata(84);

    cout << "Before exchanging the value of oc1 with oc2 :-" << endl;
    cout << "The value of oc1 is ";
    oc1.displaydata();
    cout << endl;
    cout << "The value of oc2 is ";
    oc2.displaydata();
    cout << endl;

    exchange(oc1, oc2);

    cout << "After exchanging the value of oc1 with oc2 :-" << endl;
    cout << "The value of oc1 is ";
    oc1.displaydata();
    cout << endl;
    cout << "The value of oc2 is ";
    oc2.displaydata();
    cout << endl;
    return 0;
}