using System;
class DoubeArray{
    private int capacity;
    private int lastindex;
    private int []ptr;
    public DoubeArray(int cap){
        capacity=cap;
        lastindex=-1;
        ptr = new int[capacity];
    }
    public void doublearray(){
        int []temp = new int[2*capacity];
        for(int i=0;i<lastindex;i++){
            temp[i]=ptr[i];
        }
        ptr=null;
        ptr =temp;
        capacity*=2;
    }
    public bool isEmpty(){
        return lastindex==-1;
    }
    public bool isFull(){
        return lastindex==capacity-1;
    }
    public int count(){
        return lastindex+1;
    }
    public void append(int data){
        if(isFull()){
            doublearray();
        }
        lastindex++;
        ptr[lastindex]=data;
    }
    public void insertAtindex(int index,int data){
        if(index>=0 && index<=lastindex){
            ptr[index]=data;
        }
    }
    public int get(int index){
        if(index>=0 && index<=lastindex){
            return ptr[index];
        }
        return -1;
    }
    public void printarray(){
        for(int i=0;i<count();i++){
            Console.Write(get(i)+" ");
        }
        Console.WriteLine(" ");
    }
}
// Deriver Program
class Program{
    public static void Main(String[] args){
        DoubeArray d = new DoubeArray(3);
        d.append(46);
        d.append(78);
        d.append(365);
        d.insertAtindex(2,62);
        d.printarray();
    }
}
