class Node{
    public Node prev;
    public int item;
    public Node next;
}
class CircularDoublyLL{
    private Node start;
    public CircularDoublyLL(){
        start=null;
    }
    public void insertAtbegin(int data){
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
            start=n;
        }
    }
    public void insertAtEnd(int data){
        Node n = new Node();
        n.item =data;
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
    public void printlist(){
        if(start==null){
            System.out.println("The list is Empty");
        }
        else{
            Node t;
            t=start;
            do{
                System.out.print(t.item+" ");
                t=t.next;
            }while(t!=start);
        }
        System.out.println(" ");
    }
}
// Deriver class;
class CDLL{
    public static void main(String[] args){
        CircularDoublyLL c = new CircularDoublyLL();
        c.insertAtbegin(26);
        c.insertAtEnd(42);
        c.insertAtbegin(78);
        c.insertAtbegin(56);
        c.insertAtEnd(25);
        c.insertAtEnd(41);
        c.insertAtEnd(36);
        c.insertAtbegin(78);
        c.printlist();
    }
}