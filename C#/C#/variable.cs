using System;
class Ajay{
    public static void Main(String[] args){
        dynamic value1 = "Jai Bhavani";
        dynamic value2 = 534;
        dynamic value3 = 34.243;
        dynamic value4 = 5343.4343;
        Console.WriteLine(value1.GetType().ToString());
        Console.WriteLine(value2.GetType().ToString());
        Console.WriteLine(value3.GetType().ToString());
        Console.WriteLine(value4.GetType().ToString());

        addstr("Ajay", "Chauhan");
        addstr("Jai", "Bhavani");
        addstr(64,53);
        addstr("Hello",153);

    //difference between var and dynamic variable
    var a = "Hello World";
    var b = 643;
    var c = 53.53;
    var d = false;
    dynamic a1 = "Ajay chauhan";
    dynamic b1 = 5343;
    dynamic c1 = 42.23;
    dynamic d1 = true;
    Console.WriteLine("Value of type a = " +a.GetType().ToString());
    Console.WriteLine("Value of type b = " +b.GetType().ToString());
    Console.WriteLine("Value of type c = " +c.GetType().ToString());
    Console.WriteLine("Value of type d = " +d.GetType().ToString());
    Console.WriteLine("Value of type a1 = " +a1.GetType().ToString());
    Console.WriteLine("Value of type b1 = " +b1.GetType().ToString());
    Console.WriteLine("Value of type c1 = " +c1.GetType().ToString());
    Console.WriteLine("Valueo of type d1 = " +d1.GetType().ToString());
    }
     public static void addstr(dynamic s1, dynamic s2){
        Console.WriteLine(s1+s2);
    } 
}