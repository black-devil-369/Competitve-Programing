using System;
//using namespace;
// define structure in C#
// using struct keyword
public struct Raj{
    // Declaring different data type
    // data member of struct 
    public int num;
    public double num1;
    public string name;
}
// class keyword are used to define class in C# programing language
public class Parent{
    //  data member of class
    //  data type
    public string s;
    public double d;
    public int  i;
    // member of class method
    public void patrentMethod(string s,double d, int i){
        this.s = s;
        this.d = d;
        this.i = i;
        Console.WriteLine("\nThe string is :" + s
                          + "\nThe double value d is : "+d
                          + "\nThe integers value i is: n" +i);
    }
}
class Ajay{
    public static void Main(String[] args){
        // creating an object of structure 
        Raj r1;
        r1.num = 663;
        r1.num1 = 343.364;
        r1.name = "Jai Maa Bhavani";
        Console.WriteLine("The value of data member of struct is :");
        Console.WriteLine(" \nThe value of string is :" + r1.num
                          + "\n The value of double data is :"+r1.num1
                          + "\n The vlaue of integers is : "+r1.name);
        // creating an object of class using new keywords
        Parent p1 = new Parent();
        Console.WriteLine("The value of class data member");
        p1.patrentMethod("Ajay Chauhan",34.534,343);
        Console.WriteLine("Hello World");
    }
}