using System;
class DynamicArrays{
    private int capacity;
    private int lastindex;
    private int []ptr;
    public DynamicArrays(int cap){
        capacity=cap;
        lastindex=-1;
        ptr = new int[capacity];
    }
    public void append(int data){
        if(lastindex==capacity-1){
            Console.WriteLine("Already Full");
        }
        lastindex++;
        ptr[lastindex]=data;
    }
    public void edit(int index,int data){
        if(index>=0 && index<=lastindex){
            ptr[index]=data;
        }
        else{
            Console.WriteLine("Invalid Index");
        }
    }
    public void insert(int index,int data){
        int i;
        if(index<0 || index>lastindex){
            Console.WriteLine("Invalid index");
        }
        else{
            if(isFull()){
                doublearrays();
            }
            else{
                for(i=0;i<=lastindex;i++){
                    ptr[i+1]=ptr[i];
                }
                ptr[index]=data;
                lastindex++;
            }
        }
    }
    // double arrays concept
    public void doublearrays(){
        // creating a new pointer which are pointing the arrays;
        int []temp = new int[2*capacity];
        for(int i=0;i<=lastindex;i++){
            temp[i]=ptr[i];
        }
        ptr=null;
        ptr=temp;
        capacity*=2;
    }
    // search the elment inside a arrays algorithms
    public int find(int data){
        int i;
        for(i=0;i<=lastindex;i++){
            if(ptr[i]==data){
                return i;
            }
        }
        return -1;
    }
    // delete an data at index;
    public void del(int index){
        int i;
        if(isEmpty()){
            Console.WriteLine("Arrays is Empty");
        }
        else if(index<0 || index>lastindex){
            Console.WriteLine("Invalid index");
        }
        else{
            for(i=0;i<=lastindex;index++){
                ptr[i]=ptr[i+1];
            }
            lastindex--;
            if(capacity/2>=lastindex+1 && capacity>1){
                halfarrays();
            }
        }
    }
    // half arrays concept
    public void halfarrays(){
        // creating a new pointer which are pointing the arrys
        int []temp = new int[capacity/2];
        for(int i=0;i<=lastindex;i++){
            temp[i]=ptr[i];
        }
        ptr=null;
        ptr=temp;
        capacity/=2;
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
    public bool isEmpty(){
        return lastindex==-1;
    }
    public bool isFull(){
        return lastindex==capacity-1;
    }
    // printarrays function is used to print the arrays
    public void printarrays(){
        for(int i=0;i<count();i++){
            Console.Write(get(i)+" ");
        }
        Console.WriteLine(" ");
    }

}
// Deriver class
class DoubleArrays{
    public static void Main(string[] args){
        DynamicArrays d = new DynamicArrays(5);
        Console.WriteLine(d.isFull());
        Console.WriteLine(d.isEmpty());
        d.append(36);
        d.append(38);
        d.append(42);
        Console.WriteLine(d.count());
        d.append(80);
        d.append(70);
        d.printarrays();
        Console.WriteLine(d.count());
    }
}