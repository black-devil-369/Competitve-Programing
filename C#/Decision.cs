using System;
namespace Loop{
    class Decision{
        public static void Main(String[] args){
            String ajay  = Console.ReadLine();
            int age = Convert.ToInt32(ajay);
            if(age <=24)
                Console.WriteLine("Your are in Childhood");
            else
            Console.WriteLine("You are in Adutl in");

            int[] king = new int[]{1,3,4,6,7,8};
            // Syntax :
            // foreach(data_type )
            foreach(int item in king){
                Console.WriteLine(item);
            }
        }
    }
}