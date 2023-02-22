#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number that you want to check is prime or composite : ";
    cin>>a;
    int dev=0;
    if (a>=2){
        for(int i=2;i<a;i++){
            if ((a%i)==0){
                dev=dev+1;
            }
        }
        if (dev==0){
            cout<<a<<" is a prime number."<<endl;
        }
        else{
            cout<<a<<" is a composite number."<<endl;
        }
    }
    else{
        cout<<a<<" is neither prime nor composite number."<<endl;
    }

    return 0;

}