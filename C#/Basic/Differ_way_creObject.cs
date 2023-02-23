using System;
namespace NewOperator{
    class Rectangle{
        public int breath,length;
        // Parameteried constructor
        // define by User
        public Rectangle(int l,int b){
            this.length = l;
            this.breath = b;
        }
        public int Area(){
            return length*breath;
        }
    }
    // Derive Class
    class Program{
        public static void Main(String[] args){
            Rectangle r1 = new Rectangle(25,63);
            Console.WriteLine(r1.Area());
        }
    }
}