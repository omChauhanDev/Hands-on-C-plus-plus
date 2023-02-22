#include <iostream>
using namespace std;

// Objects Memory Allocation in C++ :-
// The way memory is allocated to variables and functions of the class is different
// even though they both are from the same class.
// The memory is only allocated to the variables of the class when the object is created.
// The memory is not allocated to the variables when the class is declared.
// At the same time, single variables can have different values for different objects,
// so every object has an individual copy of all the variables of the class.
// But the memory is allocated to the function only once when the class is declared.
// So the objects don’t have individual copies of functions only one copy is shared among each object.

// Arrays in Classes :-
// Arrays are used to store multiple values of the same type.
// An array is very helpful when multiple variables are required, instead of making multiple variables
// one array can be used which can store multiple values. Array stores data in sequential order.

class shop
{
    int ItemId[100];
    int ItemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "Enter the item id for item no. " << counter + 1 << endl;
    cin >> ItemId[counter];
    cout << "Enter the price for item no. " << counter + 1 << endl;
    cin >> ItemPrice[counter];
    counter++;
}

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The item id for item no. " << (i + 1) << " is " << ItemId[i] << " and its price is " << ItemPrice[i] << "rupees." << endl;
    }
}

int main()
{
    shop dukan;
    dukan.initcounter();
    int a;
    cout << "Enter the number of items :-" << endl;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        dukan.setprice();
    }
    dukan.displayprice();
    return 0;
}
