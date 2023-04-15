#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    int item;
    node *next;
};
class SLL
{
    private:
        node *start;
    public:
        SLL();
        void insertAtStart(int);
        void insertAtLast(int);
        node* search(int);
        void insertAfter(node *,int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(node*);
        void printAllnode();
        int count();
        int numberofNode();
        ~SLL();
};
int SLL::numberofNode(){
    int count=0;
    node *t = start;
    while(t!=NULL){
        count++;
        t=t->next;
    }
    return count;
}
SLL::~SLL()
{
    while(start)
        deleteFirst();
}
void SLL::deleteNode(node *temp)
{
    node *t;
    if(start==NULL)
        cout<<"\nUnderflow";
    else 
    {
        if(temp)
        {
            if(start==temp)
            {
                start=temp->next;
                delete temp;
            }
            else
            {
                t=start;
                while(t->next!=temp)
                    t=t->next;
                t->next=temp->next;
                delete temp;                
            }
        }
    }

}
void SLL::deleteLast()
{
    node *t;
    if(start==NULL)
    {
        cout<<"\nUnderflow";
    }
    else if(start->next==NULL)
    {
        delete start;
        start=NULL;
    }
    else
    {
        t=start;
        while(t->next->next!=NULL)
            t=t->next;
        delete t->next;
        t->next=NULL;
    }
}
void SLL::deleteFirst()
{
    node *t;
    if(start)
    {
        t=start;
        start=start->next;
        delete t;
    }
}
void SLL::insertAfter(node *ptr,int data)
{
    node *n=new node;
    n->item=data;
    n->next=ptr->next;
    ptr->next=n;
}
node* SLL::search(int data)
{
    node *t;
    t=start;
    while(t!=NULL)
    {
        if(t->item==data)
            return t;
        t=t->next;
    }
    return NULL;
}
void SLL::insertAtLast(int data)
{
    node *t;
    node *n=new node;
    n->item=data;
    n->next=NULL;
    if(start==NULL)
        start=n;
    else
    {
     t=start;
     while(t->next!=NULL)
        t=t->next;
     t->next=n;
    }
}
void SLL::insertAtStart(int data)
{
    node *n=new node;
    n->item=data;
    n->next=start;
    start=n;
}
SLL::SLL()
{
    start=NULL;
}
void SLL::printAllnode(){
    node *t;
    t=start;
    while(t!=NULL){
        cout<<t->item<< " ";
        t=t->next;
    }
}
// deriver Program
int main(){
    SLL s1;
   // s1.insertAtLast(200);
    s1.insertAtStart(42);
    s1.insertAtLast(1000);
    s1.insertAtStart(49);
    s1.insertAtStart(89);
    s1.insertAtLast(62);
    s1.insertAtLast(436);
    s1.printAllnode();
    cout<<endl;
    cout<<s1.numberofNode()<<endl;
}