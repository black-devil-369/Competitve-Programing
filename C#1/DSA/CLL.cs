using System;
class Node{
    public int item;
    public Node next;
}
class CircularLinkedList{
    private Node last;
    public CircularLinkedList(){
        last=null;
    }
    public void insertAtbegin(int data){
        Node n = new Node();
        n.item=data;
        if(last!=null){
            n.next=last.next;
            last.next=n;
        }
        else{
            n.next=n;
            last=n;
        }
    }
    public void insertAtEnd(int data){
        Node n=new Node();
        n.item=data;
        if(last!=null){
            n.next=last.next;
            last.next=n;
            last=n;
        }
        else{
            n.next=n;
            last=n;
        }
    }
    public void printlist(){
        Node t;
        t=last;
        do{
            Console.Write(t.item+" ");
            t=t.next;
        }while(t!=last);
        Console.WriteLine(" ");
    }
}
// Deriver class
class CLL{
    public static void Main(String[] args){
        CircularLinkedList c = new CircularLinkedList();
        c.insertAtbegin(46);
        c.insertAtbegin(79);
        c.insertAtbegin(90);
        c.insertAtbegin(100);
        c.insertAtEnd(190);
        c.printlist();
    }
}