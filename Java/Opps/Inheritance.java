class Parrents{
     int x;
    public static void loop(int j){
        x = j;
        System.out.println(x);
    }
}
class Son extends Parrents{
    public static void loop1(){
        loop();
        int x = 100;
        System.out.println(x);
    }
}
class Inheritance{
    public static void main(){
        Son s1 = new Son();
        s1.loop1();
    }
}