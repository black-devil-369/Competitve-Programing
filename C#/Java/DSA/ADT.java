class Arrays{
    private int capacity;
    private int lastindex;
    private int[]ptr;
    public Arrays(int cap){
        this.capacity =cap;
        this.lastindex=-1;
        this.ptr=new int[capacity];
    }
    public boolean isEmpty(){
        return lastindex==-1;
    }
    public void append(int data){
        if(lastindex==capacity-1){
            System.out.println("Arrays is Already Full");
        }
        else{
            lastindex++;
            ptr[lastindex]=data;
        }
    }
    public void insertAtindex(int index,int data){
        int i;
        if(lastindex==capacity-1){
            System.out.println("Arrays is Already Full");
        }
        else if(index<0 || index>capacity-1){
            System.out.println("Invalid Index");
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
    public void deleleAtindex(int index){
        int i;
        if(isEmpty()){
            System.out.println("Arrays is Empyty");
        }
        else if(index<0 || index>lastindex){
            System.out.println("Invalid index");
        }
        else{
            for(i=index;i<=lastindex;i++){
                ptr[i]=ptr[i+1];
            }
            lastindex--;
        }
    }
    public boolean isFull(){
        return lastindex==capacity-1;
    }
    public int get(int index){
        /*if(isEmpty()){
            System.out.println("Arrays is Empty");
        }
        else if(index<0 || index>lastindex){
            System.out.println("Invalid index");
        }
        return ptr[index];
        */
        if(index>=0 && index<=lastindex){
            return ptr[index];
        }
        return -1;
    }
    public int count(){
        return lastindex+1;
    }
    public int find(int data){
        int i;
        if(isEmpty()){
            System.out.println("Arrays is Empty");
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
   /* public ~Arrays(){
        ptr=null;
    }
    */
    public void printArray(){
        int i;
        for(i=0;i<count();++i){
            System.out.print(get(i)+" ");
        }
        System.out.println(" ");
    }
}
class ADT{
    public static void main(String[] args){
        Arrays a = new Arrays(3);
        a.append(46);
        a.append(42);
        a.append(356);
        a.printArray();
    }
}