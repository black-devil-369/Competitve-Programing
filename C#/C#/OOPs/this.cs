using System;
namespace ConsoleApplication{
    class ThisKeywrod{
        public string Name;
        private int age;
        public void getage(int a){
            age = a;
            Console.WriteLine("Your age is: "+age);
        }
        public string getName(){
            return Name;
        }
        // using a 'this' Keywords 
        public void setName(string Name){
            this.Name = Name;
        }
    }
    class Program{
        public static void Main(){
            ThisKeywrod t1 = new ThisKeywrod();
            t1.setName("Ajay Chahan");
            Console.WriteLine("Your name is : " +t1.getName());
            t1.getage(18);
        }
    }
}