// Boxing and UnBoxing
using System;
namespace Boxing{
    class Program{
        public static void Main(){
            int i = 10;
            // boxing the variable or value to reference variable
            object b = i;
            // Unboxing the referenced variable into a value
            int f = (int)b;
            Console.WriteLine(i);
            Console.WriteLine(b);
            Console.WriteLine(f);
        }
    }
}