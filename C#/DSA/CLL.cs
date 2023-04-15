using System;
class Node{
    public int item;
    public Node next;
}
class CircularLinkedList{
    private Node last;
    public CircularLinkedList(){
        last = null;
    }
    public void insertAtstart(int data){
        Node n = new Node();
        n.item = data;
        if(last!=null){
            n.next = last.next;
            last.next =n;
        }
        else{
            n.next =n;
            last =n;
        }
    }
    public void insertAtEnd(int data){
        Node n = new Node();
        n.item = data;
        if(last!=null){
            n.next = last.next;
            last.next =n;
            last =n;
        }
        else{
            n.next =n;
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
    public void insertAtNode(Node temp ,int data){
        if(last!=null){
            Node n = new Node();
            n.item = data;
            n.next=temp.next;
            temp.next =n;
            if(temp==last){
                last=n;
            }
        }
    }
}
// deriver program
class CLL{
    public static void Main(String[] args){
        CircularLinkedList c = new CircularLinkedList();
        c.insertAtstart(35);
        c.insertAtEnd(46);
        c.insertAtstart(48);
        //c.insertAtNode(null,40);
        c.printlist();
    }
}