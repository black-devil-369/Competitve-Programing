
using System;
namespace ConsoleApplication1 {
  
// Base class
class GFG {
   
   // data members
    public string name;
    public string subject;
  
    // public method of base class 
    public void readers(string name, string subject)
    {
        this.name = name;
        this.subject = subject;
        Console.WriteLine("Myself: " + name); 
        Console.WriteLine("My Favorite Subject is: " + subject);
    }
}
  
// inheriting the GFG class using : 
class GeeksforGeeks : GFG {
   
    // constructor of derived class
    public GeeksforGeeks()
    {
        Console.WriteLine("GeeksforGeeks");
    }
}
class Sudo {
    static void Main(string[] args)
    {
        GeeksforGeeks g = new GeeksforGeeks();
        g.readers("Kirti", "C#");
    }
}
}*/