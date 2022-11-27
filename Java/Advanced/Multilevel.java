class One{
    public static void one(int a,int b){
        int k = a+b;
        System.out.println(k);
    }
}
class Two extends One{
    public static void two(float a,float b){
        float c = b-a;
        System.out.println(c);
    }
}
class Three extends Two{
    public static void three( int s , int s1){
        int  d = s+s1;
        System.out.println(d);
    }
}
class Multilevel{
    public static void main(String[] args){
        Three t1 = new Three();
    t1.three(9,7);
    t1.two(6,7);
    t1.one(7,8);
    }
}