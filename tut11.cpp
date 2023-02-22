#include<iostream>
using namespace std;

//break and continue statements in C++

int main(){

    //break statement in C++
    cout<<"Example of break statement in C++"<<endl;
    for (int i=1; i<=5; i++)
    {
        cout<<i<<endl;
        if (i==2)
        {
            break;
        }        
    }
    
    //continue statements in C++
    cout<<"Example of continue statement in C++"<<endl;
    for (int a=1; a<=10; a++)
    {
        if(a==5)
        {
            continue;
        }
        cout<<a<<endl;        
    }

    return 0;
}