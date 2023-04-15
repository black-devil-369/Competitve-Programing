#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s1;
    stack<int>s2;
    int c;
    s1.push(25);
    s1.push(62);
    s1.push(73);
    s1.push(63);
    s1.push(76);
    // top function is used to access the element of stack
    while(!s1.empty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }
    cout<<"Taking Element for stack s2 from user and push in it"<<endl;
    for(int i=0;i<6;++i){
        cin>>c;
        s2.push(c);
    }
    cout<<"Printing the element of stack s2"<<endl;
    while(!s2.empty()){
        cout<<s2.top()<<endl;
        s2.pop();
    }
}