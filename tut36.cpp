#include <iostream>
#include <stack>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    stack<char> st;
    char ch;
    for(int i=0; i<str.size(); i++){
        ch = str[i];
        st.push(ch);
    }
    string ans = "";
    while(!st.empty()){
        char ch = st.top();
        ans += ch;
        st.pop();
    }
    cout<<"Reverse string is : "<<ans<<endl;
    return 0;
}