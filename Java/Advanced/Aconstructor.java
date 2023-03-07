class Aconstructor{
    // creating a default constructor
    Aconstructor(){
        this(4);
        System.out.println("This default constructor");
    }
    Aconstructor(int x){
        this(8,9);
        System.out.println(x);
    }
    Aconstructor(int k,int l){
        System.out.println(k*l);
    }
    public static void main(String[] args){
        Aconstructor a1 = new Aconstructor();
    }
}