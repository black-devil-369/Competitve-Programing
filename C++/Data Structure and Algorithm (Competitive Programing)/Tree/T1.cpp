#include<iostream>
using namespace std;
struct node{
    int item;
    node *left;
    node *right;
};
class BST{
    private:
    node *root;
    public:
    BST();
    bool isempty();
    void insertNew(int);
};
BST::BST(){
    root = NULL;
}
bool BST::isempty(){
    return root == NULL;
}
void BST::insertNew(int data){
    node *n = new node;
    n->left = NULL;
    n->item = data;
    n->right = NULL;
    if(root == NULL){
        root = n;
    }
}