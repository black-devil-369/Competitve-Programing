using System;
namespace Structure{
    public struct Bus{
        string color;
        string name;
        int  no;
        public Bus(string col,string name1, int n){
            this.color=col;
            this.name=name1;
            this.no=n;
        }
        public void properties(){
            Console.WriteLine("The color is {0}",color);
            Console.WriteLine("The name is {0}",name);
            Console.WriteLine("The number is {0}",no);
        }
    }
    // Deriver class 
    class Deriver{
        public static void Main(String[] args){
            Bus b1=new Bus("Red","Tata",4562);
            b1.properties();
        }
    }
}