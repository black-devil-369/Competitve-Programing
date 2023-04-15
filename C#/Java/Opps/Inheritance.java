class Parrents{
     int x;
    public  void loop(int j){
        x = j;
        System.out.println(x);
    }
}
class Son extends Parrents{
    public  void loop1(){
        super.loop();
        int x = 100;
        System.out.println(x);
    }
}
// Deriver class program
class Inheritance{
    public static void main(){
        Son s1 = new Son();
        s1.loop1();
    }
}