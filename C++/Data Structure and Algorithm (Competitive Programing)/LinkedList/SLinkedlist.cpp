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
    void insertAtstart(int);
    void insertAtEnd(int);
    node* serarch(int);
    void insertAfter(node *,int);
    void deleteFirst();
    void deleteLast();
    void deletespecificNode(node *);
    ~SLL();
};
SLL::SLL(){
    start = NULL;
}
void SLL::insertAtstart(int data){
    // creating a new node which name is n \\ they contain [item][next] member variable
    node *n = new node;
    n->item = data;
    n->next = start;
    start = n;
    // is used to print value a present at begin
    cout<<start->item<<" ";
    //cout<<endl;
}
void SLL::insertAtEnd(int data){
    // creating a another type of node
    node *t;
    // creating a new node inside a this method
    node *temp = new node;
    temp->item = data;
    temp->next =NULL;
    if(start==NULL){
        start = temp;
    }
    else{
        while(t->next!=NULL){
            t = t->next;
        }
        t->next = temp;
    }
    cout<<temp->item<<endl;

}
node* SLL::serarch(int data){
    node *t;
    t = start;
    while(t!=NULL){
        if(t->item == data){
            return t;
        }
    }
    return NULL;
}
// insert a  data after the node 
void SLL:: insertAfter(node *ptr , int data){
    node *n = new node;
    n->item = data;
    n->next = ptr->next;
    ptr ->next = n;
}
void SLL::deleteFirst(){
    node *t;
    if(start){
        t = start;
        start = start->next;
        delete t;
    }
    
}
// code is used to delete last node 
void SLL::deleteLast(){
    node *t;
    if(start==NULL){
        cout<<"\nUnderflow";
    }
    else if(start->next == NULL){
        delete start;
        start = NULL;
    }
    else{
        t = start;
        while(t->next->next!=NULL){
            t = t->next;
            delete t->next;
            t->next = NULL;
        }
    }
}
void SLL::deletespecificNode(node *temp){
    node *t;
    if(start==NULL){
        cout<<"\nUnderflow";
    }
    else{
        if(temp){
            if(start==temp){
                start = temp->next;
                delete temp;
            }
            else{
                t = start;
                while(t->next!=temp){
                    t=t->next;
                }
                t->next =temp->next;
                delete temp;
            }
        }
    }
}
SLL::~SLL(){
    while(start){
        deleteFirst();
    }
}
int main(){
    SLL obj;
    obj.insertAtstart(34);
    obj.insertAtstart(53);
    obj.insertAtstart(38);
    obj.insertAtEnd(37);
    obj.serarch(38);
    return 0;
}