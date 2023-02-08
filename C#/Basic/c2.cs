
// C# program to illustrate the invoking of
// overloaded constructor using this keyword
using System;
  
class GFG {
      
    // Private data members
    private int Length, Height;
    private double Width;
  
    // Default Constructor
    public GFG()
    {
        Console.WriteLine("Default Constructor Invoked");
    }
    public GFG(int l, double w) : this()
    {
        Console.WriteLine("Parameterized Constructor in 2nd Constructor");
        Length = l;
        Width = w;
          
    }
    public GFG(int l, double w, int h) : this(l, w)
    {
        Console.WriteLine("Parameterized Constructor in 3rd Constructor");
        Height = h;
    }
    public double Volume()
    {
        return (Length * Width * Height);
    }
}
  
// Driver Class
class Geeks {
      
    // Main Method
    public static void Main()
    {
          
        // Invoking 3rd Constructor
        // here Constructor chaining
        // came into existence
        GFG g = new GFG(10, 20.5, 30);
  
        // calling the 'Volume' Method
        Console.WriteLine("Volume is : {0}", g.Volume());
  
    }
}