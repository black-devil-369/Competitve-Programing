using System;
class First{
    public static void Main(String[] args){
        int i = 34;
        double d = i;
        double p = 534.3;
        int c = Convert.ToInt32(p);// convert large data value to small value
        int e = (int)p;// another way to  convert large data value to samll value
        Console.WriteLine(e);
        Console.WriteLine(d);
        Console.WriteLine(c);
    }
}