// This code is written for better understanding of built-in data types;
// float, double and long double literals; reference variables; typecasting.

#include<iostream>
using namespace std;

int c=78;

int main(){

    // Built-in Data Types
    int a, b, c;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    c = a+b;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The global value of c is "<<::c<<endl;
    // Note:- Here, in order to access the value of global variable c we will use
    //        Scope Resolution Operator i.e. "::"

    // Float, Double and Long Double literals
    float d = 34.4f;
    long double e = 34.4l;

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    //Reference Variable
    int x = 8;
    int & y = x;
    cout<<"The value of variable x is "<<x<<endl;
    cout<<"The value of reference variable y is "<<y<<endl;

    //Type Casting
    float f = 45.56;
    int g = 52;
    cout<<"The value of f is "<<f<<endl;
    cout<<"The value of f in int is "<<(int)f<<endl;
    cout<<"The value of f in int is "<<int(f)<<endl;

    cout<<"The value of g is "<<g<<endl;
    cout<<"The value of g in float is "<<(float)g<<endl;
    cout<<"The value of g in float is "<<float(g)<<endl;

    int h = int(f);
    cout<<"The sum of h and f is "<<h+f<<endl;
    cout<<"The sum of h and f(in int) is "<<h+(int)f<<endl;
    cout<<"The sum of h and f(in int) is "<<h+int(f)<<endl;
    return 0;
}

