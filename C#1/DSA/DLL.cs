using System;
class Node{
    public Node prev;
    public int item;
    public Node next;
}
class DoublyLinkedList{
    private Node start;
    public DoublyLinkedList(){
        start=null;
    }
    public void insertAtbegin(int data){
        Node n = new Node();
        n.prev=null;
        n.item=data;
        if(start==null){
            n.next=start;
            start=n;
        }
        else{
            n.next=start;
            start.prev=n;
            start=n;
        }
    }
    public void insertAtEnd(int data){
        Node t;
        Node n = new Node();
        n.item=data;
        n.next=null;
        if(start==null){
            n.prev=start;
            start=n;
        }
        else{
            t=start;
            while(t.next!=null){
                t=t.next;
            }
            n.prev=t;
            t.next=n;
        }
    }
    public void insertAtNode(Node t,int data){
        if(t!=null){
            Node n = new Node();
            n.prev=t;
            n.item=data;
            n.next=t.next;
            if(t.next!=null){
                t.next.prev=n;
            }
            t.next=n;
        }
    }
    public Node search(int data){
        Node t;
        t=start;
        while(t!=null){
            if(t.item==data){
                return t;
            }
            t=t.next;
        }
        return null;
    }
    public void deleteFirst(){
        Node t;
        if(start!=null){
            t=start;
            start=start.next;
            if(start.next!=null){
                start.prev=null;
            }
            else{
                t.next=null;
            }
        }
    }
    public int numberofnode(){
        int count=0;
        Node t;
        t=start;
        if(start!=null){
            while(t!=null){
                count++;
                t=t.next;
            }
            return count;
        }
        return -1;
    }
    public void deleteLast(){
        Node t;
        if(start!=null){
            t=start;
            while(t.next!=null){
                t=t.next;
            }
            if(t.prev!=null){
                t.prev.next=null;
            }
            else{
                start=null;
            }
            t=null;
        }
    }
    public void reverseLinkedlist(){
        Node t1,t2;
        if(start!=null && start.next!=null){
            t2=null;
            do{
                t1=start;
                start=start.next;
                t1.next=t2;
                t2=t1;
            }while(start.next!=null);
            start.next=t1;
        }
    }
    public void printlist(){
        Node t;
        t=start;
        while(t!=null){
            Console.Write(t.item+" ");
            t=t.next;
        }
        Console.WriteLine(" ");
    }
}
// Deriver class
class DLL{
    public static void Main(String[] args){
        DoublyLinkedList d = new DoublyLinkedList();
        Console.WriteLine(d.numberofnode());
        d.insertAtbegin(89);
        d.insertAtbegin(67);
        d.insertAtEnd(890);
        d.insertAtbegin(90);
        d.insertAtbegin(100);
        Console.WriteLine(d.numberofnode());
        d.printlist();
        d.deleteFirst();
        d.printlist();
        d.deleteLast();
        d.printlist();
        d.reverseLinkedlist();
        d.printlist();
        Console.WriteLine(d.search(67));
        d.printlist();
    }
}