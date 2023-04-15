#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
class Stack{
    int capacity,top;
    Stack *ptr;
    public:
    int a[MAX];
    Stack(){
        top = -1;
    }
    bool push(int);
    int peek();
    int pop();
    ~Stack();//Deconstructure
};
bool Stack::push(int x){
    if(top>=(MAX-1)){
        cout<<"The stack is Overflow"<<endl;
        return false;
    }
    else{
        a[++top] = x;
        cout<<x<<endl;
        return true;
    }
}
int Stack::peek(){
    if(top<0){
        cout<<"Stack is Empty"<<endl;
        return 0;
    }
    else{
        int x = a[top];
        return x;
    }
}
int Stack::pop(){
    if(top<0){
        cout<<"Stack is Underflow"<<endl;
        return 0;
    }
    else{
        int x = a[top--];
        return x;
    }
}
