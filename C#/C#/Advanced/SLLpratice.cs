using System;
class Node{
    public int item;
    public Node next;
    // creating constructure 
    //public Node();
}
class SSLL{
    private Node start;
    public SSLL(){
        start = null;
    }
    public void insertAtbegin(int data){
        Node n = new Node();
        n.item = data;
        n.next = start;
        start = n;
    }
    public void insertAtEnd(int data){
        Node t;
        Node n = new Node();
        n.item = data;
        n.next = null;
        if(start ==null){
            start = n;
        }
        else{
            t = start;
            while(t.next!=null){
                t=t.next;
            }
            t.next=n;
        }
    }
    public void deleteLast(){
        Node t;
        if(start==null){
            Console.WriteLine("List is Empty");
        }
        else if(start.next==null){
            start = null;
            return;
        }
        else{
            t=start;
            while(t.next.next!=null){
                t=t.next;
            }
            //delete t.next;
            t.next = null;
        }
    }
    public void deletefirst(){
        //Node t;
        if(start==null){
            Console.WriteLine("List is empty");
        }
        else if(start.next==null){
            start =null;
            return ;
        }
        else{
            start=start.next;
        }
    }
    public void deleteSpecficNode(Node temp){
        Node t;
        if(start==null){
            Console.WriteLine("UnderFlow");
        }
        else{
            if(temp!=null){
                if(start==temp){
                    start=temp.next;
                    return;
                }
                else{
                    t=start;
                    while(t.next!=temp){
                        t=t.next;
                    }
                    t.next=temp.next;
                    return;
                }
            }
        }
    }
    ~SSLL(){
        while(start!=null){
            deletefirst();
        }
    }
    public void printlist(){
        Node n;
        n=start;
        while(n!=null){
            Console.Write(n.item+" ");
            n=n.next;
        }
        Console.WriteLine(" ");
    }
}
// Deriver Program;
public class LinkedList{
    public static void Main(String[] args){
        SSLL s = new SSLL();
        s.insertAtEnd(1786);
        s.insertAtbegin(46);
        s.insertAtbegin(89);
        s.insertAtbegin(78);
        s.insertAtEnd(100);
        s.printlist();
        /*s.deleteLast();
        s.printlist();
        s.deletefirst();
        s.deleteSpecficNode(2);
        s.printlist();
        s.deletefirst();
        */
    }
}