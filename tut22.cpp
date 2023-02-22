#include<iostream>
#include<string>
using namespace std;

// In this tutorial, we will discuss the nesting of a member function in C++ :-

// Object-Oriented programming Recap :-
// --> Stroustrup initially named C++ language as C with classes because C++ language was almost the same
//      as C language but they added a new concept of classes in it.
// --> Classes are the extension of structures in C language.
// --> Structures had limitations such as; members are public and no methods.
// --> Classes have some additional futures than structures such as;
//      classes that can have methods and properties.
// --> Classes have a feature to make class members as public and private.
// --> In C++ objects can be declared along with class deceleration. Eg:-
 class employee
{
   // class defination
}harry, rohan, lovish;

// Nesting of Member Functions :-
// If one member function is called inside the other member function of the same class
// it is called nesting of a member function.
// In nesting we can call one member fuction inside the other member function of the same class
// without using dot.

class binary 
{
private:
    string s; //If not written in private or public then bydefault it is considered in private.
    void check_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary :: read(void){
    cout<<"Enter any binary number :-"<<endl;
    cin>>s;
}

void binary :: check_bin(void)
{
    for (int i=0; i<s.length(); i++)
    {
        if((s.at(i)!='0') && (s.at(i)!='1'))
        {
            cout<<"Incorrect Binary Format"<<endl;
            exit(0);
        } 
    }    
}

void binary :: ones_compliment(void)
{
    check_bin();
    for (int i=0; i<s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }        
        else
        {
            s.at(i)='0';
        }        
    }
    cout<<"After Interchanging 0 and 1 with each other."<<endl;
}

void binary :: display(void)
{
    cout<<"Displaying your binary number :-"<<endl;
    for (int i=0; i<s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}


int main(){
    binary b;
    b.read();
    // b.check_bin();  // We can't call check_bin directly because this function is private.
    b.display();
    b.ones_compliment();
    b.display();



    return 0;
}