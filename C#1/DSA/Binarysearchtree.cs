using System;
namespace BST{
    public struct Node{
        public Node left{get; set;}
        public int item{get; set;}
        public Node right{get; set;}
    }
    public class BinarySearchTree{

        private Node root;
        // creating a constructor
        public BinarySearchTree(){
            root=null;
        }
        //creating a method to check the tree is empty();
        public bool isEmpty(){
            return root==null;
        }
        // creating the method to insert new element in BST
        public void insert(int data){
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
                if(n.item==ptr.item){
                    n=null;
                }
            }
        }
        protected void preorderrec(Node ptr){
            if(ptr!=null){
                Console.Write(ptr.item+" ");
                preorderrec(ptr.left);
                preorderrec(ptr.right);
            }
        }
        public void preorder(){
            preorderrec(root);
        }
        protected void postorderrec(Node ptr){
            if(ptr!=null){
                postorderrec(ptr.left);
                postorderrec(ptr.right);
                Console.Write(ptr.item + " ");
            }
        }
        public void postorder(){
            postorderrec(root);
        }
        protected void inorderrec(Node ptr){
            if(ptr!=null){
                inorderrec(ptr.left);
                Console.Write(ptr.item+" ");
                inorderrec(ptr.right);
            }
        }
        public void inorder(){
            inorderrec(root);
        }
        public Node search(int data){
            Node ptr;
            ptr=root;
            while(ptr){
                if(ptr.item==data){
                    return ptr;
                }
                if(data<ptr.item){
                    ptr=ptr.left;
                }
                else{
                    ptr=ptr.right;
                }
            }
            return ptr;
        }
    }
}
//Deriver Program
class Tree{
    public static void Main(String[] args){
        Binarysearchtree b = new BinarySearchTree();
        b.insert(25);
        b.insert(24);
        b.insert(97);
        b.insert(27);
        b.insert(80);
        b.insert(67);
        b.inorder();
    }
}
