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
        Node ptr;
        Node n = new Node();
        n.left=null;
        n.item=data;
        n.right=null;
        if(root==null){
            root=n;
        }
        else{
            ptr=root;
            while(n.item!=ptr.item){
                if(n.item<ptr.item){
                    if(ptr.left!=null){
                        ptr=ptr.left;
                    }
                    else{
                        ptr.left=n;
                        break;
                    }
                }
                else{
                    if(ptr.right!=null){
                        ptr=ptr.right;
                    }
                    else{
                        ptr.right=n;
                        break;
                    }
                }
            }
            if(ptr.item==n.item){
                n=null;
            }
        }
    }
    protected void inorderrec(Node ptr){
        if(ptr!=null){
            inorderrec(ptr.left);
            System.out.print(ptr.item+" ");
            inorderrec(ptr.right);
        }
    }
    public void inorder(){
        inorderrec(root);
    }
    protected void postorderrec(Node ptr){
        if(ptr!=null){
            postorderrec(ptr.left);
            postorderrec(ptr.right);
            System.out.print(ptr.item+" ");
        }
    }
    public void postorder(){
        postorderrec(root);
    }
    protected void preorderrec(Node ptr){
        if(ptr!=null){
            System.out.print(ptr.item+" ");
            preorderrec(ptr.left);
            preorderrec(ptr.right);
        }
    }
    public void preorder(){
        preorderrec(root);
    }
}
// Deriver Program
class BinaryTree{
    public static void main(String[] args){
        BSTree b = new BSTree();
        b.insertnode(50);
        b.insertnode(90);
        b.insertnode( 100);
        b.insertnode(30);
        b.insertnode(60);
        b.insertnode(70);
        b.inorder();
        System.out.println(" ");
    }
}