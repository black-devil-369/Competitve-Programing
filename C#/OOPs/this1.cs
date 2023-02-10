using System;
class Portal{
    private string name;
    private int age ;
    private string emails;
    public void setinformation(string n, int a, string e){
        name = n;
        age = a;
        emails = e;
        Console.WriteLine("Your name is :"+name);
        Console.WriteLine("Your age is : "+age);
        Console.WriteLine("Your emails is :"+emails);
    }
    public Portal(string n1,int a1){
        // using this keywords
        this.name = n1;
        this.age = a1;
        Console.WriteLine(name);
        Console.WriteLine(age);
    }
}
class Drive{
    public static void Main(String[] args){
        Portal p1 = new Portal("jai",34);
        p1.setinformation("Ajay Chauhan",20,"ajaychauhan1262@gmail.com");
    }
}