using System;
class Node{
    public int item;
    public Node next;
}
class Stack{
    private Node top;
    public Stack(){
        top=null;
    }
    public void push(int data){
        Node n = new Node();
        n.item=data;
        n.next=top;
        top=n;
    }
    public bool isEmpty(){
        return top==null;
    }
    public int peek(){
        if(top!=null){
            return top.item;
        }
        else{
            Console.WriteLine("Stack is Empty");
        }
        return -1;
    }
    public void pop(){
        Node t;
        if(isEmpty()){
            Console.WriteLine("underflow operation");
        }
        else{
            t=top;
            top=top.next;
            t.next=null;
        }
    }
    ~Stack(){
        while(top!=null){
            pop();
        }
    }
    public void reverse(){
        Node t1,t2;
        t2=null;
        do{
            t1=top;
            top=top.next;
            t1.next=t2;
            t2=t1;
        }while(top.next!=null);
        top.next=t1;
    }
    public void printlist(){
        Node r;
        r=top;
        while(r!=null){
            Console.Write(r.item+" ");
            r=r.next;
        }
        Console.WriteLine(" ");
    }
}
// Deriver Program;
class Program{
    public static void Main(string[] args){
        Stack s = new Stack();
        s.push(26);
        s.push(89);
        s.push(25);
        s.push(89);
        s.push(78);
        s.push(100);
        s.printlist();
        Console.WriteLine(s.peek());
        s.reverse();
        s.printlist();
    }
}