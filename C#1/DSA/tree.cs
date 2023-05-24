using BST;
class Program{
    static void Main(string[] args){
        BinarySearchTree b = new BinarySearchTree();
        b.insert(25);
        b.insert(24);
        b.insert(97);
        b.insert(27);
        b.insert(80);
        b.insert(67);
        b.inorder();
    }
}