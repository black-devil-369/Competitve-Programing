using System;
class Queue{
    private int capacity;
    private int front,rear;
    private int[] ptr;
    public Queue(int cap){
        capacity=cap;
        front=rear=-1;
        ptr = new int[capacity];
    }
    public void insert(int data){
        if(isFull()){
            Console.WriteLine("Queue is Full");
        }
        else if(isEmpty()){
            front=rear=0;
            ptr[rear]=data;
        }
        else if(rear==capacity-1){
            rear=0;
            ptr[rear]=data;
        }
        else{
            rear++;
            ptr[rear]=data;
        }
    }
    public int getrear(){
        if(!isEmpty()){
            return ptr[rear];
        }
        else{
            Console.WriteLine("Queue is Empty");
        }
        return -1;
    }
    public int getfront(){
        if(!isEmpty()){
            return ptr[front];
        }
        else{
            Console.WriteLine("Queue is Empty");
        }
        return -1;
    }
    public void deletefront(){
        if(isEmpty()){
            Console.WriteLine("Underflow Queue");
        }
        else if(front==rear){
            front=rear=-1;
        }
        else if(front==capacity-1){
            front=0;
        }
        front++;
    }
    ~Queue(){
        ptr=null;
    }
    public bool isEmpty(){
        return rear==-1;//front==rear==-1;
    }
    public bool isFull(){
        return front==0 && rear==capacity-1||rear+1=front;
    }
}