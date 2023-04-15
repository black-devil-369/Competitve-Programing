using System;
class Node{
    public Node prev;
    public int item;
    public Node next;
}
class DoublyLinkedlist{
    private Node start;
    public DoublyLinkedlist(){
        start=null;
    }
    public void insertAtbegin(int data){
        Node n = new Node();
        n.item=data;
        n.prev=null;
        if(start==null){
           // n.next =start;
           // n.prev = start;
            start = n;
        }
        else{
            n.next = start;
            start.prev = n;//start.prev=start;
            start =n;
        }
    }
    public void insertAtEnd(int data){
        Node t;
        Node n = new Node();
        n.item = data;
        n.next = null;
        if(start==null){
            n.prev=start;
            start=n;
        }
        else{
            t=start;
            while(t.next!=null){
                t=t.next;
            }
            n.prev=t;//t.next=n;
            t.next=n;//n.prev=t;
        }
    }
    public void insertAtSpecficNode(Node temp,int data){
        Node n = new Node();
        n.item = data;
        if(start==null){
            Console.WriteLine("Linkedlist is Empty");
        }
    }
    public void printList(){
        Node t;
        t=start;
        while(t!=null){
            Console.Write(t.item+" ");
            t=t.next;
        }
        Console.WriteLine(" ");
    }
}
class LinkedList{
    public static void Main(String[] args){
        DoublyLinkedlist d = new DoublyLinkedlist();
        d.insertAtbegin(65);
        d.insertAtbegin(84);
        d.insertAtbegin(245);
        
        d.insertAtEnd(345);
        d.insertAtEnd(436);
        d.printList();
    }
}
