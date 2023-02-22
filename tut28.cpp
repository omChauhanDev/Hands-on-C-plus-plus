#include <iostream>
using namespace std;

class Y; // Forward Declaration.

class X
{
    friend void sum(X o1, Y o2);
    int data;

public:
    void setdata(int value)
    {
        data = value;
    }
};

class Y
{
    friend void sum(X o1, Y o2);
    int num;

public:
    void setdata(int value)
    {
        num = value;
    }
};

void sum(X o1, Y o2)
{
    cout << "The sum of each object of   and Y is " << (o1.data + o2.num) << endl;
}

int main()
{
    X c1;
    c1.setdata(8);
    Y c2;
    c2.setdata(2);
    sum(c1, c2);
    return 0;
}