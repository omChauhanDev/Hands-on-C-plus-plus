#include<iostream>
using namespace std;

int main(){

    //Pointer ----> Pointer is a data type which store the address of another data type.
    int a=6;
    int* b =&a;
    //or 
    // int* b;
    // b= &a;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    // & ----> 'Address of' operator 
    
    cout<<"The value at b is "<<*b<<endl;
    // * ----> 'Value at' or Dereference operator

    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;


    return 0;
}