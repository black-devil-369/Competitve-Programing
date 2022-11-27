using System;
namespace Law{
    public class Pattern{
        public static void Main(String[] args){
            String number = Console.ReadLine();
            int n = Convert.ToInt32(number);
            for(int i =1; i<=n ; i++){
                for(int j = 1; j<=i; j++){
                    Console.WriteLine(" * ");
                }
                Console.WriteLine("\n");
            }
        }
    }
}