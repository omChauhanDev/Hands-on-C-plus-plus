#include<iostream>
using namespace std;

// ***** Functions & Function Prototypes in C++ :- *****

// Functions :-
// Functions are the main part of top-down structured programming.
// We break the code into small pieces and make functions of that code.
// Functions help us to reuse the code easily.
// int sum(int a, int b){
//     int c=a+b;
//     return c;
// } 

// Function Prototype in C++ :-
// The function prototype is the template of the function 
// which tells the details of the function e.g(name, parameters) to the compiler.
// Function prototypes help us to define a function after the function call.
// Syntax:-type function-name (arguments)
// int sum (int a, int b); // ----> Acceptable
// int sum (int a, b); // ----> Not Acceptable
int sum (int, int); // ----> Acceptable
// This function prototype will tell the compiler that the function “sum” is declared
// somewhere in the program which takes two integer parameters and returns an integer value.

// void g(void); // ----> Acceptable
void g(); // ----> Acceptable

int main(){
    int num1, num2;
    cout<<"Enter first value :- ";
    cin>>num1;
    cout<<"Enter second value :- ";
    cin>>num2;
    cout<<"The sum of entered values is :- "<<sum(num1,num2)<<endl;
    // Actual Parameters
    // The values which are passed to the function are called actual parameters.
    // For example, the variables “num1” and “num2” are the actual parameters.

    g(); 
    return 0;
}

int sum(int a, int b){
    int c=a+b;
    return c;
}    
// Formal Parameters
// The variables which are declared in the function are called a formal parameter.
// For example, the variables “a” and “b” are the formal parameters.

// The function doesn't need to have parameters or it should return some value.
// An example of the void function is shown below :- 
void g(){
    cout<<"Hello, Good Morning"<<endl;
}