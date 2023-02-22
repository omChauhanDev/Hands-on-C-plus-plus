#include<iostream>
using namespace std;

// Classes, Public and Private access modifiers in C++ :-

// Why use classes instead of structures ?
// Classes and structures are somewhat the same but still, they have some differences.
// For example, we cannot hide data in structures which means that everything is public
// and can be accessed easily which is a major drawback of the structure
// because structures cannot be used where data security is a major concern.
// Another drawback of structures is that we cannot add functions in it.

// Classes in C++ :-
// Classes are user-defined data-types and are a template for creating objects.
// Classes consist of variables and functions which are also called class members.

// Public Access Modifier in C++ :-
// All the variables and functions declared under public access modifier will be available for everyone.
// They can be accessed both inside and outside the class.
// Dot (.) operator is used in the program to access public data members directly.

// Private Access Modifier in C++ :-
// All the variables and functions declared under a private access modifier can only be used inside the class.
// They are not permissible to be used by any object or function outside the class.

class employee
{
    private:
    int a, b, c;

    public:
    int d, e;
    void setdata(int a1, int b1, int c1); //Declaration
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }    
};

void employee :: setdata(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    employee harry;
    harry.d = 7;
    harry.e = 8;
    harry.setdata(4, 5, 6);
    harry.getdata();
    return 0;
}