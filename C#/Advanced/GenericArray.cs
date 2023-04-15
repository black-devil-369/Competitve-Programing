using System;
class Arrayys<X>{
    private int capacity;
    private int lastindex;
    private X[]ptr;
    public Arrayys(int cap){
        capacity=cap;
        lastindex=-1;
        ptr= new X[capacity];
    }
    public void append(X data){
        if(lastindex==capacity-1){
            Console.WriteLine("Arrays is Already Full");
        }
        else{
            lastindex++;
            ptr[lastindex]=data;
        }
    }
}
// Deriver Program
class GenericArray{
    public static void Main(String[] args){
        Arrayys<int> obj = new Arrayys<int>(5);
        obj.append(46);
        obj.append(25);
        obj.append(22);
        obj.append(98);
    }
}