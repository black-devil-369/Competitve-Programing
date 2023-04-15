using System;
class Node{
    public Node prev;
    public int item;
    public Node next;
}
class CircularDoublyLinkedList{
    private Node start;
    public CircularDoublyLinkedList(){
        start =null;
    }
    public void insertAtbegin(int data)
    {
        Node n = new Node();
        n.item=data;
        if(start==null){
            n.next =n;
            n.prev=n;
            start=n;
        }
        else{
            n.prev=start.prev;
            n.next=start;
            start.prev.next=n;
            start.prev=n;
            start=n;
        }
    }
    public void insertAtEnd(int data){
        Node n = new Node();
        n.item = data;
        if(start==null){
            n.next=n;
            n.prev=n;
            start=n;
        }
        else{
            n.prev=start.prev;
            n.next=start;
            start.prev.next=n;
            start.prev=n;
        }
    }
    public void insertAtnode(Node t,int data){
        if(start!=null){
            Node n=new Node();
            n.item=data;
            n.prev=t;
            n.next=t.next;
            t.next.prev=n;
            t.next=n;
        }
    }
    public void deleteFirst(){
        Node r;
        if(start!=null){
            r=start;
            r.next.prev=r.prev;
            r.prev.next=r.next;
            if(start.next==start){
                start=null;
            }
            else{
                start=r.next;
            }
            r=null;
        }
    }
    public void printlist(){
        if(start==null){
            Console.WriteLine("The list is emptly");
        }
        else{
            Node t;
            t=start;
            do{
                Console.Write(t.item+" ");
                t=t.next;
            }while(t!=start);
            Console.WriteLine(" ");
        }
    }
}
// Deriver Program
class CDLL{
    public static void Main(string[] args){
        CircularDoublyLinkedList c2 = new CircularDoublyLinkedList();
        //c2.insertAtbegin(46);
        c2.insertAtbegin(46);
        c2.insertAtbegin(90);
        c2.insertAtbegin(42);
        c2.insertAtEnd(80);
        c2.insertAtbegin(98);
        c2.printlist();
    }
}