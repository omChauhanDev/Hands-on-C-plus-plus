#include <iostream>
using namespace std;

// Static Data Members in C++ :-
// When a static data member is created, there is only a single copy of the data member which is shared
// between all the objects of the class. As we have discussed in our previous lecture that if the data
// members are not static then every object has an individual copy of the data member and it is not shared.

// Static Methods in C++ :-
// When a static method is created, they become independent of any object and class.
// Static methods can only access static data members and static methods.
// Static methods can only be accessed using the scope resolution operator.

class Employee
{
    int id;
    static int count; // Bydefault the value of static variable is 0 and we can't
    // change this here (i.e. at the time of declaration)

public:
    void setdata(void)
    {
        cout << "Enter the id of employee number " << (count + 1) << " is "<< endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of employee number " << count << " is " << id << endl;
    }
    static void getcount(void)
    {
        // cout<<id; //This throws an error because static function can only access
        // static data member.
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee.
int Employee::count; // By default the value of static data member(or static variable
// or class variable) is 0. But we can change this value here.

int main()
{
    Employee Eeena, Meena, Teeka;
    // Eeena.id=1; //Cannot do this as id is private.
    // Eeena.count=1; //Cannot do this as count is private.

    Eeena.setdata();
    Eeena.getdata();
    Employee::getcount();

    Meena.setdata();
    Meena.getdata();
    Employee::getcount();

    Teeka.setdata();
    Teeka.getdata();
    Employee::getcount();

    return 0;
}