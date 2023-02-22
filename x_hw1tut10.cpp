#include<iostream>
using namespace std;
int main(){
    //Program to print table of 6.
    cout<<"The table of 6 is given below :-"<<endl;
    for (int i=1; i<=10; i++)
    {        
        cout<<6*i<<endl;
    }

    //Program to print table of any number entered by user.    
    int a;
    cout<<"Enter any number to get it's table"<<endl;
    cin>>a;
    cout<<"The table of "<<a<<" is given below :-"<<endl;
    for (int i=1; i<=10; i++)
    {            
        cout<<a*i<<endl;
    }    
    return 0;
}