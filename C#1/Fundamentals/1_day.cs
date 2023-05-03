// Boxing and UnBoxing
using System;
namespace Boxing{
    class Program{
        public static void Main(){
            int i = 10;
            object b = i;
            int f = (int)b;
            Console.WriteLine(i);
            Console.WriteLine(b);
            Console.WriteLine(f);
        }
    }
}