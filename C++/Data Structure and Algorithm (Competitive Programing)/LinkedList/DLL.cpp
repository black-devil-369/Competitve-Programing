#include<iostream> 
using namespace std;
struct node{
    node *prev;
    int item;
    node *next;
};
class DLL{
    private:
    node *start;
    public:
    DLL();
    void insertAtFirst(int);
};
DLL::DLL(){
    start = NULL;
}
void DLL::insertAtFirst(int data){
    // creating a new node And
    // ready the node
    node *n = new node;
    n->prev = NULL;
    n->item = data;
    n->next = start;
    if(start){
        n->prev = start;
    }
    start = n;
    cout<<start->item<<endl;
    //my code 
    /**
      node *n = new node;
      if(start==NULL){
        n->item = data;
         n->next = NULL;
         n->prev = start;
         start = n;
      }
      else{
        n->item = data;
        n->prev = NULL;
        n->next = start;
        start = n;
      }
      cout<<start->item<<endl;
     * }
     * 
    */
}
int main(){
    DLL d1;
    d1.insertAtFirst(34);
    d1.insertAtFirst(67);
    d1.insertAtFirst(78);

}
