#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

// Call by Value in C++ :-
// Call by value is a method in C++ to pass the values to the function arguments.
// In case of call by value the copies of actual parameters are sent to the 
// formal parameter, which means that if we change the values inside the function
// that will not affect the actual values.
void swap(int a, int b){ //temp  a  b
    int temp = a;        // 8    8  9
    a = b;               // 8    9  9
    b = temp;            // 8    9  8
}

// Call by Pointer in C++ :-
// A call by the pointer is a method in C++ to pass the values to the function arguments.
// In the case of call by pointer, the address of actual parameters is sent to the
// formal parameter, which means that if we change the values inside the function
// that will affect the actual values.
void swapPointer(int* a, int* b){ //temp  a  b
    int temp = *a;                // 8    8  9
    *a = *b;                      // 8    9  9  
    *b = temp;                    // 8    9  8
}

// Call by Reference in C++ :-
// Call by reference is a method in C++ to pass the values to the function arguments.
// In the case of call by reference, the reference of actual parameters is sent to the
// formal parameter, which means that if we change the values inside the function 
// that will affect the actual values.
void swapReferenceVar(int &a, int &b){ //temp  a  b
    int temp = a;                      // 9    9  8
    a = b;                             // 9    8  8
    b = temp;                          // 9    8  9
}

int &SwapReferenceVar(int &a, int &b){ //temp  a  b
    int temp = a;                      // 8    8  9
    a = b;                             // 8    9  9
    b = temp;                          // 8    9  8
    return a;
}

int main(){
    cout<<"The sum of 6 and 4 is "<<sum(6,4)<<endl<<endl;

    int x = 8, y = 9;
    cout<<"The values of x is "<<x<<" and the value of y is "<<y<<endl;
    swap(x,y); //This will NOT SWAP x and y.
    cout<<"After calling 'swap' function by values"<<endl;
    cout<<"The values of x is "<<x<<" and the value of y is "<<y<<endl<<endl;

    cout<<"The values of x is "<<x<<" and the value of y is "<<y<<endl;
    swapPointer(&x, &y); //This will SWAP x and y.
    cout<<"After calling 'swapPointers' function by pointers"<<endl;
    cout<<"The values of x is "<<x<<" and the value of y is "<<y<<endl<<endl;

    cout<<"The values of x is "<<x<<" and the value of y is "<<y<<endl;
    swapReferenceVar(x,y); //This will SWAP x and y.
    cout<<"After calling 'swapReferenceVar' function by reference variable"<<endl;
    cout<<"The values of x is "<<x<<" and the value of y is "<<y<<endl<<endl;

    cout<<"The values of x is "<<x<<" and the value of y is "<<y<<endl;
    SwapReferenceVar(x,y) = 768;
    //This will SWAP x and y.And also return the reference of x.
    cout<<"After calling 'SwapReferenceVar' function by reference variable"<<endl;
    cout<<"The values of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}