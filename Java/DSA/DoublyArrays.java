class DoubleArray{
    private int capacity;
    private int lastindex;
    private int[]ptr;
    public DoubleArray(int cap){
        capacity=cap;
        lastindex=-1;
        ptr = new int[capacity];
    }
    public void doubleArray(){
        int []temp = new int[2*capacity];
        for(int i=0;i<=lastindex;i++){
            temp[i]=ptr[i];
        }
        ptr =null;
        ptr = temp;
        capacity*=2;
    }
    public boolean isFull(){
        return lastindex==capacity-1;
    }
    public boolean isEmpty(){
        return lastindex==-1;
    }
    public void append(int data){
        if(isFull()){
            doubleArray();
        }
        lastindex++;
        ptr[lastindex]=data;
    }
    public int count(){
        return lastindex+1;
    }
    public int get(int index){
        if(index>=0 && index<=lastindex){
            return ptr[index];
        }
        System.out.println("Invalid index");
        return -1;
    }
    public int size(){
        return capacity;
    }
    void printlndoublearray(){
        for(int i=0;i<count();i++){
            System.out.print(get(i)+" ");
        }
        System.out.println(" ");
    }
}
// Derive Program
class DoublyArrays{
    public static void main(String[] args){
        DoubleArray d = new DoubleArray(2);
        d.append(43);
        d.append(34);
        d.printlndoublearray();
    }
}