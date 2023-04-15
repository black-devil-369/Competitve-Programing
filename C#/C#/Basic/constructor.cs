using System;
public class Add{
    int x,y;
    double d;
    string s;
    // defing a constructor in c#
    public Add(int a,int b){
        x = a;
        y = b;
    }
    // defining a constructor overloading
    //  constructor overloading is declared by the same name of constructor but differ in  type arguments, number arguments and order of arguments
    public Add(double z,string c){
        d = z ;
        s = c;
    }
    public void print1(){
        Console.WriteLine("First Consturctor value of x is: "+x +
                          "\n and value y is :"+y +
                          "\n The sum value of x and y is :" ,(x+y));

    }
    public void print2(){
        Console.WriteLine("First Consturctor value of d is: "+d +
                          "\n and value s is :"+ s +
                          "\n The sum value of d and s is :" + d+ " "+s);
    }
}
class Derive{
    public static void Main(String[] args){
        // creating a object for class
        Add s1 = new Add(63,74);
        // calling the method
        s1.print1();
        Add s2 = new Add(636.56,"Jai Maa Bhavani");
        //calling the method
        s2.print2();
    }
}