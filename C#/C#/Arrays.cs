using System;
namespace Arrays{
    class Array{
        public static void Main(String[] args){
            // declaring a arrays in C#
            Console.WriteLine("Enter the size for arrays");
            string input = Console.ReadLine();
           int n = Convert.ToInt32(input);
            int [] arr = new int [n];
            Console.WriteLine("Enter the Element for an Arrays");
            for(int i=0;i<n-1;++i){
                arr[i] = Convert.ToInt32(input);
            }
            // Printing the Element of Arrays
            for(int i =0;i<n-1;++i){
                Console.WriteLine(arr[i]);
            }
        }
    }
}