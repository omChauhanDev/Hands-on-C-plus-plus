#include<iostream>
using namespace std;

// Recursions & Recursive Functions in C++ :-
// When a function calls itself it is called recursion and the function which is calling 
// itself is called a recursive function. The recursive function consists of a base case
// and recursive condition. It is very important to add a base case in recursive function
// otherwise recursive function will never stop executing.

// Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by definition
    // 1! = 1 by definition
    // n! = n * (n-1)!

int factorial(int n){
    if (n<2){
        return 1;
    }
    return n * factorial(n-1);
}
// Step by step calculations for factorial(4)
// 4 * factorial( 4-1 )
// 4 * 3 * factorial( 3-1 )
// 4* 3 * 2 * factorial( 2-1 )
// 4 * 3 * 2 * 1
// 24

// Fibonacci Recursive Function :-
int fib(int n){
    if (n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

int main(){
    int a;
    cout<<"Enter any number to find its factorial :- ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;

    int b;
    cout<<"Position on which you want term of fibonacci series :- ";
    cin>>b;
    cout<<"The term in fibonacci series at "<<b<<" is "<<fib(b)<<endl;


    return 0;
}