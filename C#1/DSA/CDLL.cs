using System;
 class node{
    public node prev;
    public int item;
    public node next;
}
class CDLL{
    private node start;
    public CDLL(){
        start=null;
    }
    public void insertatbegin(int data){
        node n = new node();
        n.item=data;
        if(start==null){
            n.prev=n;
            n.next=n;
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
    public void insertatEnd(int data){
        node n = new node();
        n.item=data;
        if(start==null){
            n.prev=n;
            n.next=n;
            start=n;
        }
        else{
            n.prev=start.prev;
            n.next=start;
            start.prev.next=n;
            start.prev=n;
        }
    }
    public node search(int data){
        node t;
        if(start!=null){
            t=start;
            do{
                if(t.item==data){
                    return t;
                }
                t=t.next;
            }while(t!=start);
        }
        return null;
    }
    public void insertatNode(node temp,int data){
        if(temp!=null){
            node n=new node();
            n.item=data;
            n.prev=temp;
            n.next=temp.next;
            n.next.prev=n;
            temp.next=n;
        }
    }
    public void deletefirst(){
        if(start!=null){
            node t;
            t=start;
            t.next.prev=t.prev;
            t.prev.next=t.next;
            if(start.next==start){// start.next==start;
                start=null;
            }
            else{
                start=t.next;
            }
            t=null;
        }
    }
    public void deleteLast(){
        node r;
        if(start!=null){
            if(start.next==start && start.prev==start){
                start=null;
            }
            else{
                r=start.prev;
                r.prev.next=start;
                start.prev=r.prev;
                r=null;
            }
        }
    }
    public void deleteNode(node r){
        if(r!=null){
            if(start==start.next){
                start=null;
            }
            else{
                r.prev.next=r.next;
                r.next.prev=r.prev;
                if(start==r){
                    start=r.next;
                }
                r=null;
            }
        }
    }
    public void printlist(){
        node t;
        t=start;
        do{
            Console.Write(t.item+" ");
            t=t.next;
        }while(t!=start);
        Console.WriteLine(" ");
    }
    ~CDLL(){
        while(start!=null){
            deletefirst();
        }
    }
}
// Deriver Program
class CicularDLL{
    public static void Main(string[] args){
        CDLL c = new CDLL();
        c.insertatbegin(52);
       // c.insertatbegin(89);
       // c.insertatbegin(25);
        //c.insertatEnd(24);
        //c.insertatEnd(7);
        //c.printlist();
        c.deletefirst();
        Console.WriteLine("Done Deletion");
        c.printlist();
       // c.deleteLast();
       // c.printlist();
    }
}