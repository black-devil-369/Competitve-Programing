using System;
class Arrays{
    private int capacity;
    private int lastindex;
    private int[]ptr;
    public Arrays(int cap){
        capacity=cap;
        lastindex=-1;
        ptr=new int[capacity];
    }
    public void append(int data){
        if(lastindex==capacity-1){
            Console.WriteLine("Arrays is already full");
        }
        else{
            lastindex++;
            ptr[lastindex]=data;
        }
    }
    public int count(){
        return lastindex+1;
    }
    public int get(int index){
        if(index>=0 && index<=lastindex){
            return ptr[index];
        }
        else{
            Console.WriteLine("Invalid index");
            return -1;
        }
    }
    public bool isEmpty(){
        return lastindex==-1;
    }
    public bool isFull(){
        return lastindex==capacity-1;
    }
    public void edit(int index,int data){
        if(index>=0 && index<=lastindex){
            ptr[index]=data;
        }
    }
    public void insert(int index , int data){
        int i;
        if(lastindex==capacity-1){
            Console.WriteLine("Arrays is Full");
        }
        else if(index<0 && index>lastindex){
            Console.WriteLine("Invalid index");
        }
        else{
            for(i=lastindex;i>index;i--){
                ptr[i+1]=ptr[i];
            }
            ptr[index]=data;
            lastindex++;
        }
    }
    public int find(int data){
        int i;
        for(i=0;i<=lastindex;i++){
            if(ptr[i]==data){
                return i;
            }
        }
        return -1;
    }
    public void del(int index){
        int i;
        if(isEmpty()){
            Console.WriteLine("Arrays is empty");
        }
        else if(index<0 && index>lastindex){
            Console.WriteLine("Invalid index");
        }
        else{
            for(i=index;i>=lastindex;i--){
                ptr[i]=ptr[i+1];
            }
            lastindex--;
        }
    }
    public void printarrays(){
        int i;
        for(i=0;i<count();i++){
            Console.Write(get(i)+" ");
        }
        Console.WriteLine(" ");
    }
    ~Arrays(){
        ptr = null;
    }
    public void reversearray(){
        int i;
        for(i=0;i<=lastindex;i++){
            ptr[i]=ptr[i+1];
        }
    }
}
// Deriver Class
class ArraysDS{
    public static void Main(String[] args){
        Arrays a = new Arrays(5);
        a.isFull();
        a.printarrays();
        a.append(67);
        a.append(46);
        a.append(40);
        a.append(89);
        a.append(78);
        a.printarrays();
        a.reversearray();
        a.printarrays();
    }
}