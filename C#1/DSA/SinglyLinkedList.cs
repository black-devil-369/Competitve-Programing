using System;
class Node{
    public int item;
    public Node next;
}
class SLL{
    private Node start;
    public SLL(){
        start=null;
    }
    public void insertAtbegin(int data){
        Node n = new Node();
        n.item=data;
        n.next=start;
        start=n;
    }
    public void insertAtEnd(int data){
        Node t;
        Node n = new Node();
        n.item=data;
        n.next=null;
        if(start==null){
            start=n;
        }
        else{
            t=start;
            while(t.next!=null){
                t=t.next;
            }
            t.next=n;
        }
    }
    public void insertAtnode(Node temp,int data){
        Node n = new Node();
        n.item=data;
        n.next=temp.next;
        temp.next=n;
    }
    public Node search(int data){
        Node t;
        t=start;
        while(t.next!=null){
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
            t.next=null;
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
    public int numberofNode(){
        int count=0;
        Node t=start;
        while(t!=null){
            count++;
            t=t.next;
        }
        return count;
    }
    public void deleteLast(){
        Node t;
        t=start;
        if(start==null){
            Console.WriteLine("Underflow");
        }
        else if(start.next==null){
            start=null;
        }
        else{
            t=start;
            while(t.next.next!=null){
                t=t.next;
            }
            t.next=null;
        }
    }
    public void deleteNode(Node temp){
        Node t;
        if(start==null){
            Console.WriteLine("Under flow");
        }
        else{
            if(temp!=null){
                if(start==temp){
                    start=start.next;
                    temp=null;
                }
                else
                {
                    t=start;
                    while(t.next!=temp){
                        t=t.next;
                    }
                    t.next=temp.next;
                    temp=null;
                }
            }
        }
    }
    public void printlist(){
        Node t = new Node();
        t=start;
        while(t!=null){
            Console.Write(t.item+" ");
            t=t.next;
        }
        Console.WriteLine(" ");
    }
    ~SLL(){
        deleteFirst();
    }
}
// Deriver class
class SinglyLinkedList{
    public static void Main(String[] args){
        SLL s = new SLL();
        Console.WriteLine(s.numberofNode());
        s.insertAtbegin(46);
        s.insertAtEnd(35);
        s.insertAtbegin(25);
        s.insertAtEnd(97);
        s.insertAtbegin(79);
        s.printlist();
        s.reverseLinkedlist();
        s.printlist();
        Console.WriteLine(s.numberofNode());
    }
}