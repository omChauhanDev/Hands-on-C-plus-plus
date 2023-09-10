/* This code is written for the better understanding of header files 
   and the different types of operators in C++*/

// There are 2 types of header files :-
// 1.System header files - It comes with the compiler.
// 2.User defined header files - It is written by the programmer. Eg:-
// #include "this.h"
// This will produce error if this file this.h is not present in the same directory.

#include<iostream>
using namespace std;
int main(){
    int a=5, b=6;

    cout<<"Following are the different types of operators in C++ :-"<<endl<<endl;

    //Arithmatic Operators 
    cout<<"1.Arithmatic Operators in C++ :-"<<endl;
    cout<<"The value of a+b operator is "<<(a+b)<<endl;
    cout<<"The value of a-b operator is "<<(a-b)<<endl;
    cout<<"The value of a*b operator is "<<(a*b)<<endl;
    cout<<"The value of a/b operator is "<<(a/b)<<endl;
    cout<<"The value of a%b operator is "<<(a%b)<<endl;
    cout<<"The value of a++ operator is "<<(a++)<<endl;
    cout<<"The value of a-- operator is "<<(a--)<<endl;
    cout<<"The value of ++a operator is "<<(++a)<<endl;
    cout<<"The value of --a operator is "<<(--a)<<endl<<endl;

    //Asignment Operators :- Used to assign values to variables. Eg:-
    //int a=2, b=6;
    //char c='k';

    //Compairison Operators
    cout<<"2.Compairison Operators in C++ :-"<<endl;
    cout<<"The value of a==b operator is "<<(a==b)<<endl;
    cout<<"The value of a!=b operator is "<<(a!=b)<<endl;
    cout<<"The value of a<b operator is "<<(a<b)<<endl;
    cout<<"The value of a>b operator is "<<(a>b)<<endl;
    cout<<"The value of a<=b operator is "<<(a<=b)<<endl;
    cout<<"The value of a>=b operator is "<<(a>=b)<<endl<<endl;

    //Logical Operators
    cout<<"3.Logical Operators in C++ :-"<<endl;
    cout<<"The value of logical 'and' operator i.e. ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of logical 'or' operator i.e. ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of logical 'not' operator i.e. (!(a==b)) is "<<(!(a==b))<<endl;

    //Bitwise Operators :- They first convert into binary and then do bit by bit operation.
    //Bitwise operators are taught in upcoming tutorials of C++.
    return 0;
}   