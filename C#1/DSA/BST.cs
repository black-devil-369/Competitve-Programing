using System;
class Node
{
    public Node left;
    public int item;
    public Node right;
}
class BinarySearchTree
{
    private Node root;
    public BinarySearchTree()
    {
        root = null;
    }
    public bool isEmpty()
    {
        return root == null;
    }
    public void insert(int data)
    {
        Node ptr;
        Node n = new Node();
        n.left = null;
        n.item = data;
        n.right = null;
        if (root == null)
        {
            root = n;
        }
        else
        {
            ptr = root;
            while (n.item != ptr.item)
            {
                if (n.item < ptr.item)
                {
                    if (ptr.left != null)
                    {
                        ptr = ptr.left;
                    }
                    else
                    {
                        ptr.left = n;
                        break;
                    }
                }
                else
                {
                    if (ptr.right != null)
                    {
                        ptr = ptr.right;
                    }
                    else
                    {
                        ptr.right = n;
                        break;
                    }
                }
            }
            if (ptr.item == n.item)
            {
                n = null;
            }
        }
    }
    protected void preorderrec(Node ptr)
    {
        if(ptr!=null){
            Console.Write(ptr.item + " ");
            preorderrec(ptr.left);
            preorderrec(ptr.right);
        }
    }
    public void preorder()
    {
        preorderrec(root);
    }
    protected void inorderrec(Node ptr){
        if(ptr!=null){
            inorderrec(ptr.left);
            Console.Write(ptr.item + " ");
            inorderrec(ptr.right);
        }
    }
    public void inorder()
    {
        inorderrec(root);
    }
    protected void postorderrec(Node ptr)
    {
        if (ptr != null)
        {
            postorderrec(ptr.left);
            postorderrec(ptr.right);
            Console.Write(ptr.item + " ");
        }
    }
    public void postorder()
    {
        postorderrec(root);
    }
}
// Deriver Program;
class BST
{
    public static void Main(String[] args)
    {
        BinarySearchTree b = new BinarySearchTree();
        b.insert(50);
        b.insert(30);
        b.insert(60);
        b.insert(25);
        b.insert(97);
        b.insert(89);
        b.preorder();
        Console.WriteLine(" ");
        b.postorder();
        Console.WriteLine(" ");
        b.inorder();
    }
}