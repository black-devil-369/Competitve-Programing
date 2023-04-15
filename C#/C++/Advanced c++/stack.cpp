#include<bits/stdc++.h>
using namespace std;
void sum1(){
    stack<int>mystack_1;
    int n,b,sum=0;
    cout<<"Etner the size of stack"<<endl;
    cin>>n;
    cout<<"Enter the element inside a stack for sum:"<<endl;
    for(int i = 1; i<=n; i++){
        cin>>b;
        mystack_1.push(b);
    }
   /** cout<<"Element enter by you inside a Stack"<<endl;
    while(!mystack_1.empty()){
        cout<<mystack_1.top()<<endl;
        mystack_1.pop();
    }**/
    cout<<"Size of Stack: "<<mystack_1.size()<<endl;
    cout<<"Sum of Stack element is : ";
    while(!mystack_1.empty()){
        sum = sum+mystack_1.top();//stack_name.top() is used for print top element inside a stack;
        mystack_1.pop();
    }
    cout<<sum;
}
// Systax For stack : stack<data_type>stack_name
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //Declaration of Stack
    //stack<int>stack;
    // Declaration of Another Stack;
    stack<float>mystack;
    int n,b;
    cout<<"Enter the size of Stack"<<endl;
    cin>>n;
    cout<<"Enter the element inside a stack"<<endl;
    for(int  i = 1; i<=n; i++){
        cin>>b;
        mystack.push(b);
    }
    cout<<"Size of Stack: "<<mystack.size()<<endl;
    cout<<"Element Enter by you inside a stack"<<endl;
    while(!mystack.empty()){
        cout<<" "<<mystack.top()<<endl;
        mystack.pop();
    }
    sum1();
/**
    stack.push(5);
    stack.push(4);
    stack.push(6);
    stack.push(8);
    while(!stack.empty()){
        cout<<" "<<stack.top();
        stack.pop();
    }
    **/
}
