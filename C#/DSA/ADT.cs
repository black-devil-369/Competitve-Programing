using System;
class Array{
    private int capacity;
    private int lastindex;
    private int[]ptr;
    public Array(int cap){
        this.capacity=cap;
        this.lastindex=-1;
        this.ptr = new int[capacity];
    }
    public bool isFull(){
        return lastindex==capacity-1;
    }
    public bool isEmpty(){
        return lastindex==-1;
    }
    public void append(int data){
        if(lastindex==capacity-1){
            Console.WriteLine("Arrays is Full");
        }
        else{
            lastindex++;
            ptr[lastindex]=data;
        }
    }
    public void insertAtindex(int index,int data){
        int i;
        if(lastindex==capacity-1){
            Console.WriteLine("Arrays is Full");
        }
        else if(index<0 || index>lastindex){
            Console.WriteLine("Invalid index");
        }
        else{
            for(i=lastindex;i>=index;i--){
                ptr[i+1]=ptr[i];
            }
            ptr[index]=data;
            lastindex++;
        }
    }
    public void editAtindex(int index,int data){
        if(index>=0 && index<=lastindex){
            ptr[index]=data;
        }
    }
    public void deleteAtindex(int index){
        int i;
        if(lastindex==capacity-1){
            Console.WriteLine("Arrays is Full");
        }
        else if(index<0 || index>lastindex){
            Console.WriteLine("Invalid index");
        }
        else{
            for(i=lastindex;i>=index;i--){
                ptr[i]=ptr[i+1];
            }
            lastindex--;
        }
    }
    public int count(){
        return lastindex+1;
    }
    public int get(int index){
        if(index>=0 && index<=lastindex){
            return ptr[index];
        }
        return -1;
    }
    public int find(int data){
        int i;
        if(isEmpty()){
            Console.WriteLine("Arrays is Empyty");
        }
        else{
            for(i=0;i<=lastindex;i++){
                if(ptr[i]==data){
                    return i;
                }
            }
        }
        return -1;
    }
    public ~Array(){
        ptr = null;
    }
}
// Deriver Program
class ADT{
    public static void Main(String[] args){
        Array a1 = new Array(5);
    }
}
