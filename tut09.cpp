#include<iostream>

using namespace std;

// Basic Control structures in C++ :-

// 1. Sequence Control Structure
//    Till now the code we have written in C++ are the examples of sequence control structures.

// 2. Selection Control Structure
//    a. If else-if else ladder.
//    b. Switch Case.

int main(){
    int age;
    cout<<"Tell me your age."<<endl;
    cin>>age;

//If else-if else ladder
    if ((age<18) && (age>0)){
        cout<<"You can't come to my party."<<endl;
    }
    else if (age<0){
        cout<<"You are not yet born."<<endl;
    }
    else if (age==18){
        cout<<"You are a kid and you will be given a kid-pass to come to my party."<<endl;
    }
    else{
        cout<<"You can come to my party."<<endl;
    }

// Switch Case
    switch (age){
    case 18 :
     cout<<"You are 18 years old."<<endl;
     break;
    case 20 :
     cout<<"You are 20 years old."<<endl;
     break;
    default :
     cout<<"You are not a special case."<<endl;
     break;
   }
    return 0;
}
//3. Loop Control Structures
//   We will understand in tutorial 10.