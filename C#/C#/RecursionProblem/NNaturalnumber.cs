using System;
namespace NNaturalnumber{
    // recursive function for N natural number
    class Recursion{
        public void Nnatural(int nums){
            if(nums>0){
                Nnatural(nums-1);
                Console.WriteLine(nums);
            }
        }
        // recursive functino for Reverse N Natural number
        public void RNNatural(int num){
            if(num>0){
                Console.WriteLine(num);
                RNNatural(num-1);
            }
        }
        // recursive function for N odd Natural number;
        public void NODD(int k){
            if(k>0){
                NODD(k-1);
                Console.WriteLine(2*k-1);
            }
        }
        // recursive function for Reverse N odd Natural number
        public void RNODD(int k){
            if(k>0){
                Console.WriteLine(2*k-1);
                RNODD(k-1);
            }
        }
        public void Neven(int n){
            if(n>0){
                Neven(n-1);
                Console.WriteLine(2*n);
            }
        }
    }
    class Deriver{
        public static void Main(String[] args){
            Recursion r = new Recursion();
            Console.WriteLine("The N natural number");
            r.Nnatural(4);
            Console.WriteLine("The N odd Natural number");
            r.NODD(10);
            Console.WriteLine("The N even Natural number");
            r.Neven(6);
        }
    }
}
