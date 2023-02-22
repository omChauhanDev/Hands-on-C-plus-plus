#include<iostream>
using namespace std;

// Function Overloading in C++ :-
// Function overloading is a process to make more than one function with the same name
//  but different parameters, numbers, or sequence.

//  1st example :-
int sum(int a, int b){
    cout<<"Using function with 2 arguments "<<endl;
    return a+b;    
}

int sum(int a, int b, int c){
    cout<<"Using functions with 3 arguments"<<endl;
    return a+b+c;
}

// 2nd example :-
// Function to calculate the volume of a cylinder
float volume(float r, float h){
    return (3.14*r*r*h);
}
// Function to calculate the volume of a cube
float volume(float a){
    return (a*a*a);
}
// Function to calculate the volume of a cuboid
float volume(float l, float b,float h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 2 and 8 is "<<sum(2,8)<<endl;
    cout<<"The sum of 2, 4 and 8 is "<<sum(2,4,8)<<endl<<endl;

    cout<<"The volume of a cylinder with radius 4cm and height 10cm is "<<volume(4, 10)<<"cubic cm"<<endl;
    cout<<"The volume of a cube with side 2cm is "<<volume(2)<<"cubic cm"<<endl;
    cout<<"The volume of a cuboid with length 4cm, breadth 6cm and height 10cm is "<<volume(4, 6, 10)<<"cubic cm"<<endl;

    return 0;
}