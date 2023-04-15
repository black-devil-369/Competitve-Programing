public class Node{
    public int item;
    public Node next;
}
public class Stacklikedlist{
    private Node top;
    public Stacklikedlist(){
        top=null;
    }
    public void push(int data){
        Node n = new Node();
        n.item=data;
        n.next=top;
        top = n;
    }
    public int peek(){
        if(top==null){
            System.OutOfMemoryException.println("Stack is Empty");
            return -1;
        }
        else{
            return top.item;
        }
    }
    public void top(){
        Node t;
        if(isEmpty()){
            System.OutOfMemoryException.println("Stack is underfow");

        }
        else{
            t=top;
            top = top.next;
            t=null;
        }
    }
}