using System;
namespace ConsoleApplication{
    public struct Person{
        public string name;
        public int age;
        public int weight;
    }
    class Access{
        public static void Main(string[] args){
            Person p1;
            p1.name = "Ajay Chauhan";
            p1.age = 20;
            p1.weight = 64;
            Console.WriteLine("Name : " +p1.name);
            Console.WriteLine("Age : " +p1.age);
            Console.WriteLine("Weight : " +p1.weight);

        }
    }
}