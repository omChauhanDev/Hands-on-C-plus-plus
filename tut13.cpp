#include<iostream>
using namespace std;

int main(){
    //Array ----> An array is the collection of items which are of 
    //similiar data type stored in contiguous memory locations.
    //Array Example :-
    int marks[] = {53, 23, 93, 73};

    int mathmarks[4];
    mathmarks[0] = 463;
    mathmarks[1] = 345;
    mathmarks[2] = 565;
    mathmarks[3] = 427;

    cout<<"These are the marks :-"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<"These are the mathmarks :-"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    // We can also change the value of an array.
    marks[1] = 50;
    marks[2] = (marks[0] + 7) ;
    cout<<"The changed value of marks[1] is "<<marks[1]<<endl;
    cout<<"The changed value of marks[2] is "<<marks[2]<<endl;

    // Printing marks using for loop :-
    cout<<"Done using for loop"<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<"The value of marks["<<i<<"] is "<<marks[i]<<endl;
    }

    // Printing marks using while loop :-
    cout<<"Done using while loop"<<endl;
    int a=0;
    while(a<4)
    {
        cout<<"The value of marks["<<a<<"] is "<<marks[a]<<endl;
        a=a+1;
    } 

    // Printing marks using do-while loop :-
    cout<<"Done using do-while loop"<<endl;
    int b=0;
    do{
        cout<<"The value of marks["<<b<<"] is "<<marks[b]<<endl;
        b=b+1;
    }while(b<4);

    // Pointers and arrays :-
    int* p = marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    
    return 0;
}