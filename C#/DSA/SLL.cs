using System;
namespace LinkedList{
    public struct Node{
        public int item;
        public Node next;
    }
    class SLL{
         private Node start;
        public SLL(){
            start = null;
        }
        public void insertAtbegin(int data){
            Node n = new Node();
            n.item= data;
            if(start==null){
                n.next = start;
                start = n;
            }
            else{
                n.next = start.next;
                start = n;
            }
        }
        public void insertAtEnd(int data){
            Node t;//=new node();
            Node n= new Node();
            n.item = data;
            n.next = null;
            if(start==null){
                start = n;
            }
            else{
                t=start;
                while(t.next!=null){
                t=t.next;
            }
            t.next = n;
            }
        }
        public void PrintList(){
            Node t = start;
            while(t!=null){
                Console.WriteLine(t.data);
                t=t.next;
            }
        }
    }
    // Derive class
    class Program{
        public static void Main(String[] args){
            SLL s = new SLL();
            s.insertAtbegin(56);
            s.insertAtEnd(43);
            s.PrintList();
        }
    }
}
