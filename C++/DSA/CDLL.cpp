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
    CDLL();// creating a constructure
    void insertAtbegin(int);
    void insertAtend(int);
    node* search(int);
    void insertAfter(node*,int);
    void deleteFirst();
    void deleteLast();
    void deleteNode(node *);
    ~CDLL();
    void printlist();

};
CDLL::~CDLL(){
    while(start){
        deleteFirst();
    }
}
void CDLL::deleteNode(node *temp){
    if(temp){
        if(start==start->next){
            start = NULL;
        }  
        else{
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            if(start==temp){
                start = temp->next;
            }
        }
        delete temp;
    }
}
void CDLL::deleteLast(){
    node *r;
    if(start){            
        if(start->prev ==start){
            delete start;
            start = NULL;
        }
        else{
            r = start->prev;
        r->prev->next = start;
        start->prev = r->prev;
        delete r;
        }
    }
}
void CDLL::deleteFirst(){
    node *r;
    if(start){
        r = start;
        r->next->prev = r->prev;
        r->prev->next =r->next;
        if(start->next==start){
            start =NULL;
        }
        else{
            start=r->next;
        }
        delete r;
    }
}
void CDLL::insertAfter(node *temp,int data){
    if(temp){
        node *n = new node;
        n->item = data;
        n->prev = temp;
        n->next = temp->next;
        temp->next->prev =n;
        temp->next = n;
    }
}
node* CDLL::search(int data){
    node *t;
    t=start;
    if(t){
        do
        {
           if(t->item==data){
            return t;
           } 
           t=t->next;/* code */
        } while (t!=start);
        
    }
    else{
        return NULL;
    }

}
CDLL::CDLL(){
    start = NULL;
   // node *n = new node();
   // n->item = data;
}
void CDLL::insertAtbegin(int data){
    node *n = new node();
    if(start==NULL){
        n->next =n;
        n->prev=n;
        start =n;
    }
    /*n->item = data;
    n->prev = start->prev;
    n->next = start;
    n->next->prev = n;
    n->prev->next = n;
    start =n;
    */
   else{
    n->prev=start->prev;
    n->next=start;
    start->prev->next =n;
    start->prev=n;
    start=n;
   }
}
void CDLL::insertAtend(int data){
    node *n = new node();
    n->item = data;
    if(start==NULL){
        n->next = n;
        n->prev=n;
        start =n;
    }
    else{
        n->prev = start->prev;
        n->next=start;
        start->prev->next=n;
        start->prev=n;
       // start =n;
    }
    //n->prev = start->prev;
   // n->next = start->next;
   void CDLL::printlist(){
    node *t;
    t=start;
    while(t->next->next!=start){
        cout<<t->item<<" ";
        t = t->next;
    }
    cout<<endl;
   }
}
// Deriver Program
int main(){
    CDLL c1;
    c1.insertAtbegin(67);
    c1.insertAtbegin(89);
    c1.insertAtbegin(56);
    c1.printlist();
    return 0;
}

