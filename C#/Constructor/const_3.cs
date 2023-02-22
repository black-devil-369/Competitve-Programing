using System;
namespace CopyConstructor{
    class Copy{
        private int id;
        private String email;
        private int year;
        //creating a copy constructor
        public Copy(Copy c){
            /*
             id = c.i;
            email = c.e;
            year = c.y;
            */
            id = c.id;
            email = c.email;
            year = c.year;
        }
        // creating a constructor in c#
        public Copy(int i,String e,int y){
            this.id = i;
            this.email = e;
            this.year = y;
        }
        public void getinformation(){
            Console.WriteLine(id);
            Console.WriteLine(email);
            Console.WriteLine(year);
        }
    }
    // Derive class
    class Derive{
        public static void Main(){
            Copy c1 = new Copy(632,"ajaychauhan1262@gmail.com",20);
            Copy c2 = new Copy(c1);
            c2.getinformation();
        }
    }
}