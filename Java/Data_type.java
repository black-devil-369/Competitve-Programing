import java.io.*;
import java.util.Scanner;
public class Data_type{
    public static void main(String[] args){
        Scanner star = new Scanner(System.in);
        System.out.println("Enter the value of Star1");
        int star1 = star.nextInt();
        System.out.println("Enter the vaule of A");
        int a = star.nextInt();
        System.out.println("Enter the value of k");
        int k = star.nextInt();
        System.out.println("Enter the value of x");
        int x = star.nextInt();
        System.out.println("Enter the value of sum");
        int sum = star.nextInt();
        for(int i=1; i<=star1; i++){// using of for loop
            for(int j = 1; j<=i; j++){
                System.out.print(" * ");
            }
            System.out.println(" ");
        }
        while(a<=star1){ // using of while loop 
            System.out.println(a);
            a++;
        }
        do//using of do_while loop 
        {
            System.out.println("hello World");
            k++;
        }
        while(k<5);
        do{
            sum+=x;
            x--;
        }
        while(x>10);
        System.out.println("Summation : "+sum);
    }
}