using System;
namespace BinaryTreeNamespace
{
    public struct Node
    {
        public int data;
        public Node left;
        public Node right;
    }

    public class BinaryTree
    {
        private Node root;

        public BinaryTree()
        {
            root = null;
        }

        public void Insert(int data)
        {
            Node newNode = new Node();
            newNode.data = data;

            if (root == null)
            {
                root = newNode;
            }
            else
            {
                Node current = root;
                Node parent;

                while (true)
                {
                    parent = current;

                    if (data < current.data)
                    {
                        current = current.left;

                        if (current == null)
                        {
                            parent.left = newNode;
                            break;
                        }
                    }
                    else
                    {
                        current = current.right;

                        if (current == null)
                        {
                            parent.right = newNode;
                            break;
                        }
                    }
                }
            }
        }

        public void InOrderTraversal(Node root)
        {
            if (root != null)
            {
                InOrderTraversal(root.left);
                Console.Write(root.data + " ");
                InOrderTraversal(root.right);
            }
        }
    }
}
// Deriver program
class Program{
    static void Main(String[] args)
    {
        BinaryTreeNamespace.BinaryTree tree=new BinaryTreeNamespace.BinaryTree();
        tree.Insert(26);
        tree.Insert(25);
        tree.Insert(97);
        tree.Insert(24);
        tree.Insert(29);
        tree.Insert(28);
        tree.InOrderTraversal(tree.root);
    }
}