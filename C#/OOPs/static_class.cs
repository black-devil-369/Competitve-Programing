using System;
namespace Example_Static_Class{
    // static class can be declare with the static keyword
    /*
      syntax: static class class_Name{
        // inside a static class
        // only we can declare
        // static data
        // static method
        // static constructor
        // by using of static keywords
      }
      there is not creating the object of static class
      */
    static class Author{
        // define member of static class 
        // it is also delcar with static keyword
        public static string A_name = "Ajay Chauhan";
        public static string L_name = "C sharp";
        public static int age = 20;
        public static void details(){
            Console.WriteLine("The detials of Author is:");
        }
    }
    // derive class
    public class Derive{
        static void Main(String[] args){
            Author.details();
            Console.WriteLine("The name of Author is: " +Author.A_name +
                              "\n The of Language write by Aurhtor is: "+Author.L_name+
                              "\n Age of Author is : "+Author.age);
        }
    }
}