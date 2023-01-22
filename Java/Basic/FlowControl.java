import java.io.*;
import java.util.Scanner;
class FlowControl{
    // flowControl in java are
    // if-else , if-else-if if-else ladder
    public static void main(String[] args){
        // creating a object for scanner 
        Scanner input = new Scanner(System.in);
        // taking a integers input
        System.out.println("Enter the first number"); 
        int a = input.nextInt();
        System.out.println("Enter the second number");
        int b = input.nextInt();
        System.out.println("Enter the third number");
        int c = input.nextInt();
        // using if-else-if method to solove a greatest elements;
        if(a>b && a>c){
            System.out.println("A is greatest number");
        }
        else if(b>a && b>c){
            System.out.println("B is Greatest number");
        }
        else{
            System.out.println("C is Greatest number");
        }
        // using a switch loop
        switch(a){
            case 1:
        System.out.println("One");
        break;
        case 2:
        System.out.println("Two");
        break;
        case 3:
        System.out.println("Three");
        break;
        default:
        System.out.println("Jai Maa Bhavani");
        break;
        }
        // using of a continue 
        for(int i = 0; i<=a;i++){
            if(i%2==0){
                continue;
            }
            System.out.println(i);
        }
    }
}