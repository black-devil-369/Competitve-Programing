/*(

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
//Node::Node(int data){
   // this->data =data;
    //this->next = NULL;
}
void insertAtbegin(Node* &head,int d){
    //creating a new node;
    Node* temp = new Node(d);
    temp->next  = head;
    head = temp;
}
void print(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
int main(){
    Node* node1 = new Node(12);// creating a clas object node1 ;
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    insertAtbegin(head,45);
    print(head);
    return 0; 
}
*/
#include<iostream>
using namespace std;
class Node{
    public:
    int item;
    Node* next;
    Node(int data){
        this->item = data;
        this->next = NULL;
    }
};
void insertAtbegin(Node* &head,int d){
    Node* temp = new Node(d); // creating new node temp
    temp->next = head;
    head = temp;
}
void insertAttail(Node* &tail,int b){
    Node* temp = new Node(b);
    tail->next = temp;
    tail = tail->next;
}
void insertAtmiddle(int position,int c){
    
}
// For printing linkedlist 
void print(Node* &head){
    Node *temp = head;//creating a new node temp
    while(temp!=NULL)
    {
        /* code */
        cout<<temp->item<<" ";
        temp = temp->next;
    }
    cout<<endl;  
}

//void print1(Node* &head){
    //Node*temp = tail;
    //while (temp!=NULL)
    //{
        /* code */
      //  cout<<tail->item<<" ";
      //  temp = temp->next;
  //  }
    //cout<<endl; 
int main(){
    Node *node1 = new Node(10);
    // printing a linked list;
    cout<<node1->item<<endl;
    // printing a address of next node
    cout<<node1->next<<endl;
    // adding node at a begin
    Node*head = node1;
    Node*tail = node1;
    insertAtbegin(head,56);
    print(head);
    insertAttail(tail,59);
   // print1(tail);
   print(head);
    return 0;
}