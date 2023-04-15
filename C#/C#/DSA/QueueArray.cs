using System;
public class Queue{
    private int capacity;
    private int front;
    private int rear;
    private int[] ptr;
    public Queue(int cap){
        capacity=cap;
        front=-1;
        rear=-1;
        ptr = new int[capacity];
    }
    public bool isFull(){
        return front==0 && rear==capacity-1 || rear+1==front;
    }
    public bool isEmpty(){
        return rear==-1;
    }
    public void insertdata(int data){
        if(isFull()){
            Console.WriteLine("Queue is Alreay Full");
        }
        else if(isEmpty()){
            front=rear=0;
            ptr[rear]=data;
        }
        else if(rear==capacity-1){
            rear =0;
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
    }
    public int getfront(){
        if(!isEmpty()){
            return ptr[front];
        }
        else{
            Console.WriteLine("Queue is Empty");
        }
    }
    public void del(){
        
    }
}