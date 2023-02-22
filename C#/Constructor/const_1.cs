using System;
namespace defaultConstructor{
    class House{
        private String name;
        private int age ;
        // creating a default contructur in c#
        // constructor is same name of class name
        // default construct in creating without pass any parameter in it
        public House(){
            Console.WriteLine("Default constructor");
        }
    }
    class Derive{
        public static void Main(){
            // creating object for house class
            House h1 = new House();
            Console.WriteLine(h1.name);
            Console.WriteLine(h1.age);
        }
    }
}