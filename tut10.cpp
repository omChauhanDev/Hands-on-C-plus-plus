#include<iostream>
using namespace std;
int main(){
    /* Loops in C++
    1.for loop.
    2.while loop.
    3.do-while loop.*/

    //for loop in C++
    //Syntax for 'for loop':-
    //for (initialization; condition; updation)
    //{
    //  loop body (C++ code)
    // }
    //Example of for loop :-
    for (int i=1; i<=5; i++)
    {
        cout<<i<<endl;

    }
    // Example of infinte for loop :-
    // for  (int a=1; 7<9; a++)
    // {
    //     cout<<a<<endl;
    // }

    //while loop in C++
    //syntax for 'while loop':-
    //while (condition)
    //{
    //  C++ statement;  
    //}
    //Example of while loop :-
    int b=1;
    while (b<=10)
    {
        cout<<b++<<endl;
    }
    //Example of infinte while loop :-
    // int c=1;
    // while(true)
    // {
    //     cout<<c++<<".Condition is true"<<endl;
    // }


    //do while in C++
    //syntax for 'do while loop':-
    // do{
    //     C++ statement;
    // }while(condition);
    //Example of do while loop :-
    int d=1;
    do{
        cout<<d++<<endl;
    }while(d<=40);

    return 0;
}