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
    public void deleteFirst(){
        if(start==null){
            System.out.println("List is Empty");
        }
        else if(start.next==null){
            start=null;
            return;
        }
        else{
            start = start.next;
        }
    }
    public void deleteLast(){
        Node t;
        if(start==null){
            System.out.println("UnderFlow LinkedList");
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
    public void printlist(){
        Node n;
        n=start;
        while(n!=null){
            System.out.print(n.item+" ");
            n=n.next;
        }
        System.out.println( " ");
    }
}
// Deriver Program;
public class LinkedList{
    public static void main(String[] args){
        SSLL s = new SSLL();
        s.insertAtEnd(1786);
        s.insertAtbegin(46);
        s.insertAtbegin(89);
        s.insertAtbegin(78);
        s.insertAtEnd(100);
        s.printlist();
    }
}