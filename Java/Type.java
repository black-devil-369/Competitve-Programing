import java.io.*;
import java.util.Scanner;
public class Type{
    public static void main(String[]args){
        Scanner a = new Scanner(System.in);
        int i = a.nextInt();
        float f = a.nextFloat();
        long l = a.nextLong();
        String str1 = a.next();
        System.out.println("Integers = "+i);
        System.out.println("Float = "+f);
        System.out.println("Long = "+l);
        System.out.println("String = "+str1);
    }
}