import java.util.*;
class Node{
    public Node prev;
    public int item;
    public Node next;
}
class DoublylinkedList{
    private Node start;
    public DoublylinkedList(){
        start = null;
    }
    public void insertAtbegin(int data){
        Node n = new Node();
        n.item=data;
        n.prev=null;
        if(start==null){
            n.next=start;
            start=n;
        }
        else{
            n.next =start;
            start.prev = n;
            start =n;
        }
        // another way to reduce the line of above code is
        /*Node n = new Node();
        n.prev =null;
        n.item=data;
        n.prev=null;
        if(start!=null){
            start.prev=n;
        }
        start =n;
        */
    }
    public void insertAtEnd(int data){
        Node n = new Node();
        n.item =data;
        n.next = null;
        if(start==null){
            n.next = null;
            start=n;
        }
        else{
            Node t=start;
            while(t.next!=null){
                t=t.next;
            }
            n.prev=t;
            t.next=n;
        }
    }
    public void printlist(){
        Node t;
        t=start;
        while(t!=null){
            System.out.print(t.item+" ");
            t=t.next;
        }
        System.out.println(" ");
    }
}
// creating a Deriver Program to run the code
class DoublyLinkedlist{
    public static void main(String[] args){
        DoublylinkedList d = new DoublylinkedList();
        d.insertAtbegin(42);
        d.insertAtbegin(24);
        d.printlist();
    }
}