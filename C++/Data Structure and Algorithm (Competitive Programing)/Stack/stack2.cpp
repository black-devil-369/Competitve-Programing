//#include<bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;
// definea a structure name is struct;
struct node
{
    /* data */
    int item;
    node *next;
    /*node(int data){
        this->data = data;
        this->next = NULL;
    }*/
};

class Stack
{
private:
    node *top;

public:
    Stack();
    Stack(Stack&);
    void push(int);
    bool isEmpty();
    int peek();
    void pop();
    ~Stack();
    void reverse();
    //Stack operator=()
};
// copy constructure
Stack::Stack(Stack &S){
    node *t,*n,*p;
    t = S.top;
    while (t)
    {
        /* code */
        n = new node();
        n->item = t->item;
        if(top == NULL){
            top=n;
        }  
        else{
            p->next = n;
        }    
        t = t->next;
        p =n;
    }
    if(p!=NULL){
        p->next = NULL;
    }
}
void Stack::reverse()
{
    node *t1, *t2;
    if (top && top->next)
    {
        t2 = NULL;
        do
        {
            /* code */
            t1 = top;
            top = top->next;

        } while (top->next != NULL);
    }
}
void Stack::pop()
{
    // create a new node in this function
    node *r; // = new node();
    if (isEmpty())
    {
        cout << "\nStack is underflow";
    }
    else
    {
        r = top;
        top = top->next;
        delete r;
    }
}
int Stack::peek()
{
    // if stack is empty
    if (top == NULL)
    {
        cout << "\n Stack is empty";
        return -1;
    }
    // if stack is not empty then give this
    else
    {
        return top->item;
    }
}
bool Stack::isEmpty()
{
    return top == NULL;
}
void Stack::push(int data)
{
    // creating a new node
    // node *n = new node();
    node *n;
    n = new node;
    n->item = data;
    n->next = top;
    top = n;
}
Stack::Stack()
{
    top = NULL;
}
void reverse(Stack &s1){
    Stack s2;
    while(!s1.isEmpty()){
        s2.push(s1.peek());
        s1.pop();
    }
    s1=s2;
}
