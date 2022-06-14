using System;
public class A{
    // Instance Variable 
    int  a;
    int b;
    int c;
    //Static Variable
    static double salary;
    static string name = "Ajay";
    void l(){
        // Local variable because inside a method l
        int k = 343;
        Console.WriteLine(k);
    }
    public static void Main(String[] args){
        A.salary = 4343;
        A obj = new A();
        obj.a = 15;
        obj.b = 434;
        obj.c = 534;
        A obj1 = new A();
        obj1.a = 77;
        obj1.b = 80;
        obj1.c = 95;
        
        Console.WriteLine("Numer of First Object");
        Console.WriteLine(obj.a);
        Console.WriteLine(obj.b);
        Console.WriteLine(obj.c);

        Console.WriteLine("Number of Second Object");
        Console.WriteLine(obj1.a);
        Console.WriteLine(obj1.b);
        Console.WriteLine(obj1.c);
        A obj2 = new A();
        obj2.l();
        Console.WriteLine(A.name+ "'s Salary: "+A.salary);
        
    }
}