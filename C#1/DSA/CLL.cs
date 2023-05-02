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
    public void insertAtNode(Node r,int data){
        if(last!=null){
            Node n=new Node();
            n.next=r.next;
            n.item=data;
            r.next=n;
            if(r==last){
                last=n;
            }
        }
    }
    public Node search(int data){
        /*
        Node r;
        if(last!=null){
            r=last;
            do{
                if(r.item==data){
                    return r;
                }
                r=r.next;
            }while(r!=null);
        }
        return null;
        */
        Node t;
        if(last!=null){
            t=last.next;
            do{
                if(t.item==data){
                    return t;
                }
                t=t.next;
            }while(t!=last.next);
        }
        return null;
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
    public void deleteFirst(){
        Node r;
        if(last!=null){
            r=last.next;
            if(last.next==last){
                last=null;
            }
            else{
                last.next=r.next;
                r.next=null;
            }
        }
    }
    public void deleteLast(){
        Node t;
        t=last;
        while(t.next!=last){
            t=t.next;
        }
        // for single node
        if(t==last){
            last=null;
        }
        // for more than one node
        else{
            t.next=last.next;
            last=null;
            last=t;
        }
    }
    public void deletespecifyNode(Node t){
        
    }
    public void reverselist(){
        if(last==null){
            return null;
        }
        else{
            Node t1,t2,t3;
            t3=null;
            do{
                t1=last.next;
                t2=t1;
                t1=t1.next;
                t2.next=t3;
                t3=t2;
            }while(t1.next!=last);
            last.next=t2;
        }
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
        //Console.WriteLine(c.search(79));
        c.printlist();
        c.reverselist();
        c.printlist();
    }
}