#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int a=4;
    char b='c';
    cout<<"The value of a was "<<a<<endl;
    cout<<"The value of b was "<<b<<endl;
    a=5;
    b='6';
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;

    // Constants in C++
    const int d=45;
    cout<<"The value of constant d is "<<d<<endl;
    //Now by using 'const', d is declared as a constant(read only type).
    //Now on changing the value of d it will show error.
    //d=89; This will show error.

    // Manipulators in C++
    int f=99,g=999,h=9999;
    cout<<"The value of f without setw is "<<f<<endl;
    cout<<"The value of g without setw is "<<g<<endl;
    cout<<"The value of h without setw is "<<h<<endl;

    cout<<"The value of f with setw is "<<setw(4)<<f<<endl;
    cout<<"The value of g with setw is "<<setw(4)<<g<<endl;
    cout<<"The value of h with setw is "<<setw(4)<<h<<endl;

    //Operator Presedence and Associativity in C++
    //See presedence and associativity for all operators from the link given below.
    //Ctrl+Click on the link given below. 
    //https://en.cppreference.com/w/cpp/language/operator_precedence
    const int x=10,y=20;
    int c = (x*y)+30;
    //Operator Presedence of multiply is higher than addition so first 
    //we will multiply then add.
    cout<<"The value of c was "<<c<<endl;
    c = (((x*5)+y)-4)+8;
    //Operator Presedence of addition and substraction is same 
    //So now we will see associativity
    //For addition and substraction associativity is "Left to Right"
    cout<<"The value of c was "<<c<<endl;
    return 0;
}