using System;
class Area{
    private int length,height;
    private double width;
    // Creating a constructor
    // constructor call a default constructor
    public Area(){
        Console.WriteLine("Default constructor");
    }
    public Area(int a ,double b):this(){
        length = a;
        width = b;
    }
    // creating a constructor
    public Area(int a,double b,int c) : this(a,b){
        height = c;
    }
    public double Volume(){
        return (length*width*height);
    }

}
class Derive(){
    public static void Main(String[] args){
        // creating a object for Constructor2 class
        Area c1 = new Area(53,63.98,74);
        Console.WriteLine("The volume of this is:{0} ",c1.Volume());
    }
}