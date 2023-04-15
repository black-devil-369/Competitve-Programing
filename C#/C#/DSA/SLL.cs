using System;
namespace LinkedList{
    public struct Node{
        public int item{get;set;}
        public Node next{get;set;}
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
        public void reverseLinkedlist(){
            Node t1,t2;
            if(start!=null && start.next!=null){
                t2=null;
                do
                {
                    t1=start;
                    start = start.next;
                    t1.next = t2;
                    t2=t1;
                } while (start.next!=null);
            }
        }
    }// end class 
    
    class Program{
        public static void Main(String[] args){
           /* SLL s = new SLL();
            s.insertAtbegin(56);
            s.insertAtEnd(43);
            s.PrintList();
            */
            LinkedList mylist = new LinkedList();
            mylist.Add(43);
            mylist.Add(46);
            mylist.Add(89);
            mylist.Print();
            mylist.reverseLinkedlist();
            mylist.Print();
        }
    }
}
/*
// Another code for linkedlist without using generic code
class Node 
{
        public int data;
        public Node next;
        public Node(int d) {
            data = d;
            next = null;
        }
}
    class LinkedList {
        Node head;
        public void AddNode(int data) {
            Node newNode = new Node(data);
            if (head == null) {
                head = newNode;
            }
            else {
                Node current = head;
                while (current.next != null) {
                    current = current.next;
                }
                current.next = newNode;
            }
        }
        public void PrintList() {
            Node current = head;
            while (current != null) {
                Console.Write(current.data + " ");
                current = current.next;
            }
            Console.WriteLine();
        }
    }
    // Another class for linkedlist code
    public class LinkedListNode
    {
        public int Data { get; set; }
        public LinkedListNode Next { get; set; }
        public LinkedListNode(int data)
        {
            Data = data;
            Next = null;
        }
    }
    public class LinkedList
    {
        private LinkedListNode head;
        public LinkedList()
        {
            head = null;
        }
        public void Add(int data)
        {
            LinkedListNode newNode = new LinkedListNode(data);
            if (head == null){
                head =newNode;
            }
            else{
                LinkedListNode current = head;
                while (current.Next != null){
                    current = current.Next;
                }
                current.Next = newNode;
            }
        }
        public void Remove(int data){
            if (head == null){
                return;
            }
            if (head.Data == data){
                head = head.Next;
                return;
            }
            LinkedListNode current = head;
            while (current.Next != null){
                if (current.Next.Data == data){
                    current.Next = current.Next.Next;
                    return;
                }
                current = current.Next;
            }
        }
        public void Print(){
            LinkedListNode current = head;
            while (current != null){
                Console.Write(current.Data + " ");
                current = current.Next;
            }
            Console.WriteLine();
        }
    }

// linkedlist program without using generic code


*/
