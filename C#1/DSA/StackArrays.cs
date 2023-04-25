using System;
class Stack{
    private int capacity;
    private int top;
    private int[] ptr;
    public Stack(int cap){
        capacity=cap;
        top=-1;
        ptr = new int[capacity];
    }
    protected bool isEmpty(){
        return top==-1;
    }
    protected bool isFull(){
        return top==capacity-1;
    }
    public void append(int data){
        if(isFull()){
            Console.WriteLine("Stack arrays is FuLL");
        }
        else{
            top++;
            ptr[top]=data;
        }
    }
    protected int count(){
        return top+1;
    }
    protected int get(int index){
        if(index>=0 && index<=top){
            return ptr[index];
        }
        else{
            Console.WriteLine("Invalid index");
        }
        return -1;
    }
    public int peek(){
        return get(count()-1);
    }
    protected void del(int index){
        int i;
        if(isEmpty()){
            Console.WriteLine("Stack is Empty");
        }
        else if(index<0 || index>top)
        {
            Console.WriteLine("Invalid index");
        }
        else{
            for(i=index;i<=top;i++){
                ptr[i]=ptr[i+1];
            }
            top--;
        }
    }
    public int pop(){
        return del(count()-1);
    }
}