/*using System;
namespace Unsafe{
    class Program{
        public void Main(String[] args){
            unsafe{
                int x = 34;
                int *ptr;
                ptr = &x;
                Console.WriteLine(ptr);
            }
        }
    }
}
*/
using System;
  
namespace GFG {
  
class Program {
  
    // Main Method
    static void Main(string[] args)
    {
        // Declaring a code block as 
        // unsafe to make use of pointers
        unsafe
        {
            int x = 10;
            int* ptr;
            ptr = &x;
  
            // displaying value of x using pointer
            // displaying value of x using pointer
            Console.WriteLine("Inside the unsafe code block");
            Console.WriteLine("The value of x is " + *ptr);
        } // end unsafe block
  
        Console.WriteLine("\nOutside the unsafe code block");
    } // end main
}
}