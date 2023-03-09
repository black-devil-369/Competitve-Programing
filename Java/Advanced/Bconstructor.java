class Bconstructor{
    Bconstructor(){
        System.out.println("It is no arguments constructor");
    }
    Bconstructor(int x){
        this();
        System.out.println(x);
    }
    Bconstructor(double d ,String s){
        this(6);
        System.out.println(d);
        System.out.println(s);
    }
    public static void main(String[] args){
        Bconstructor b1 = new Bconstructor(34.662,"Ajay");
    }
}