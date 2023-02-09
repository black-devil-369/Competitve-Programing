using System;
namespace NestingStrcutre{
    public struct Address{
        public string vill_name;
        public int pin;
    }
    struct Person{
        public string name;
        public int age;
        public float height;
        public Address a1;
    }
    class Derive{
        public static void Main(string[] args){
            Person p1;
            p1.name = "Ajay Chauhan";
            p1.age = 20;
            p1.height = 5.6f;
            p1.a1.vill_name = "Adampur";
            p1.a1.pin = 221603;
            Console.WriteLine("Name : " +p1.name);
            Console.WriteLine("Age : " +p1.age);
            Console.WriteLine("Height : " +p1.height);
            Console.WriteLine("Vill_name : "+p1.a1.vill_name);
            Console.WriteLine("Pin : " +p1.a1.pin);
        }
    }
}