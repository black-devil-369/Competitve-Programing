#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    // creating a constructure
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
// insert a element at begin of linkedlist

void insertAtbegin(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
// insert a element at End of Linkedlist
void insertAtEnd(Node* End,int d){
    Node*temp1 = new Node(d);
    End->next = temp1;
    End = End->next;
}
void insertAtPosition(Node* &End,Node* &head,int position,int d){
    // insert at start;
    if(position==1){
        insertAtbegin(head,d);
        return;
    }
    Node* temp2 = head;
    int cnt = 1;

    while (cnt<position-1)
    {
        temp2 = temp2->next;
        cnt++;/* code */
    }
    if(temp2->next ==NULL){
        insertAtEnd(End,d);
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp2->next;
    temp2->next = nodeToInsert;
}
// Printing a Linkedlist
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL)
    {
       cout<<temp->data<<" "; /* code */
       temp = temp->next;
    }
    cout<<endl;
}
int main(){
    int d;
    cin>>d;
    Node* node1 = new Node(d);
    // printing elements inside a linked list
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    Node*head = node1;
    Node*End = node1;
    insertAtbegin(head,69);
    print(head);
    // inserting a element at End'
    insertAtEnd(End,67);
    print(head);
    insertAtPosition(End,head,2,78);
    print(head);
}