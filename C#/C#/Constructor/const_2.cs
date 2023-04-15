using System;
namespace ParameterizeConstructor{
    // creating class
    class Parameterize{
        // class member
        private String Name;
        private int age;
        // creating a constructor
        // Parmaterize Constructor contain minimum one paramter or more than one
        public Parameterize(String name1 , int age1){
            this.Name = name1;
            this.age = age1;
            Console.WriteLine("Your_Name = "+Name);
            Console.WriteLine("Your_Age = "+age);
        }
        public void getinformation(String name2,int age2){
            this.Name = name2;
            this.age = age2;
            Console.WriteLine(Name,"\n");
            Console.WriteLine(age);
        }
      //  public void getage()
    }
    //creating a Devive main class
    class Derive{
        public static void Main(){
            Parameterize p1 = new Parameterize("Ajay Chauhan",21);
            p1.getinformation("Jai Chauhan",26);
        }
    }
}