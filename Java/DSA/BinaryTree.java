class Node{
    public Node left;
    public int item;
    public Node right;
}
class BSTree{
    private Node root;
    public BSTree(){
        root=null;
    }
    public boolean isEmpty(){
        return root==null;
    }
    public void insertnode(int data){
        Node n = new Node();
        n.item=data;
        n.left=null;
        n.right=null;
        if(root==null){
            root=n;
        }
        else if(n.item<root.item){
            root.left=n;
        }
        else{
            root.right=n;
        }
    }
}
// Deriver Program
class BinaryTree{
    public static void main(String[] args){
        
    }
}