#include<iostream>
using namespace std;
struct node
{
    /* data */
    node *prev;
    int item;
    node *next;
};
class CDLL{
    private:
    node *start;
    public:
    CDLL();// creating a construct
    void insertAtbegin(int);
    void insertAtend(int);
};
CDLL::CDLL(){
    start = NULL;
   // node *n = new node();
   // n->item = data;
}
void CDLL::insertAtbegin(int data){
    node *n = new node();
    n->item = data;
    n->prev = start->prev;
    n->next = start;
    n->next->prev = n;
    n->prev->next = n;
    start =n;
}
void CDLL::insertAtend(int data){
    node *n = new node();
    n->item = data;
    n->prev = start->prev;
    n->next = start->next;
}

