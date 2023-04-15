import java.util.Scanner;
import java.io.*;
public class Pattern{
    public static void main(String[] args){
        Scanner scr = new Scanner(System.in);
        int x = scr.nextInt();
        for(int i=1;i<=x; i++){
            for(int j=1; j<=i; j++)
            System.out.print(" * ");
            System.out.println(" ");
        }     
        System.out.println("Another type of pattern:");
        for(int i = 1; i<=x; i++){
            for(int j = x; j>=i; j--)
            System.out.print(" * ");
            System.out.println(" ");
        } 
    }
}