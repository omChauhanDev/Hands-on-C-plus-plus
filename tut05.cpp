#include<iostream>

using namespace std;
// This code is written to practice input and output streams.
int main(){
    int num1, num2, num3;

    cout<<"Enter the first value:\n"; // '<<' This is called INSERTION OPERATOR.
    cin>>num1; // '>>' This is called EXTRACTION OPERATOR.

    cout<<"Enter the second value:\n";
    cin>>num2;

    cout<<"Enter the third value:\n";
    cin>>num3;

    cout<<"The sum of given values is : "<< num1 + num2 + num3;

    return 0;
}