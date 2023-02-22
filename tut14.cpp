#include<iostream>
using namespace std;

// ***** Structures in C++ ***** :-
// The structure is a user-defined data type that is available in C++.
// Structures are used to combine different types of data types, 
// just like an array is used to combine the same type of data types. 

typedef struct employee
{
    int eId; //4
    char favChar; //1
    float salary; //4
} ep ;
// Here, typedef is used to assign shortcut "ep" in place of struct employee.


union money
{
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){
    struct employee alex;
    alex.eId = 1;
    alex.favChar = 'a';
    alex.salary = 380000000;

    cout<<"Alex's employee id is "<<alex.eId<<endl;
    cout<<"Alex's favourite character is "<<alex.favChar<<endl;
    cout<<"Alex's salary is "<<alex.salary<<endl;

    ep carry;
    carry.eId = 2;
    carry.favChar = 'c';
    carry.salary = 840000000;

    cout<<"Carry's employee id is "<<carry.eId<<endl;
    cout<<"Carry's favourite character is "<<carry.favChar<<endl;
    cout<<"Carry's salary is "<<carry.salary<<endl;


    // ***** Unions in C++ ***** :-
    // Unions are similar to structures
    // but they provide better memory management then structures.
    // Unions use shared memory so only 1 variable can be used at a time.

    // We have created a union with the name “money” in which
    // we have declared three variables of different data types (rice, car, pound).
    // The main thing to note here is that:
    // We can only use 1 variable at a time otherwise
    // the compiler will give us a garbage value
    // The compiler chooses the data type which has maximum memory for the allocation.

    union money m1;
    m1.rice = 8;
    m1.car = 'd';
    cout<<"The value of m1.rice is "<<m1.rice<<endl; //Show garbage value.
    cout<<"The value of m1.car is "<<m1.car<<endl; //Show real value.
    cout<<"The value of m1.pounds is "<<m1.pounds<<endl; //Show garbage value.
    //The main thing to note here is that
    //once we have assigned a value to the union field “rice”,
    //now we cannot use other fields of the union otherwise we will get garbage value.


    // ***** Enums  in  C++ ***** :-
    // Enums are user-defined types which consist of named constants.
    // Enums are used to make the program more readable.

    enum Meal {breakfast, lunch, dinner};
    Meal M1 = lunch ;
    cout<<"The value of Meal M1 is "<<M1<<endl;
    // The main thing to note here is that (breakfast, lunch, dinner) are constants;
    // the value for “breakfast” is “0”, the value for “lunch” is “1”
    // and the value for “dinner” is “2”.

    cout<<"The value of M1 is 2. This statement is "<<(M1==2)<<endl;
    // Note:- '0' means false and '1' means true.

    return 0;
}