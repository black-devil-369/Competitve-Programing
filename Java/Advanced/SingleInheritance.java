class One{
    public static void one(int a ,int b){
        int k = a+b;
        System.out.println(k);
    }
}
class Two extends One{
    public static void two(){
        System.out.println("Hello World");
    }
}
class SingleInheritance{
    public static void main(String[] args){
        Two object = new Two();
        object.two();
        object.one(3,6);
    }
}