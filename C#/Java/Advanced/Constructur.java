class Geeks{
    public static void b(int a,int b){
        System.out.println(a+b);
    }
    Geeks(){
        System.out.println("Hello");
    }
}
class Constructur{
    public static void main(String[] args){
        Geeks obj = new Geeks();
        obj.b(34,67);
    }
}
