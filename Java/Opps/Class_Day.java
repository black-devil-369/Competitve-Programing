import java.io.*;
import java.util.Scanner;
class AvinashPandey{
    private String name1;
    public AvinashPandey(String name){
        this.name1 = name;
    }
    public void getinformation(){
        System.out.println("Avinash Pandey Breakup from  " +name1+ " Since 17 march 2020");
        System.out.println("Target Completed");
    }
}
class AbhishekYadav{
    private String name;
    public  AbhishekYadav(String name1){
        this.name = name1;
    }
    public void getinformation(){
        System.out.println("Abhishek Yadav Love With "+ name + " Since From 2020");
        System.out.println("Target Completed");
    }
}
// Derive Program
class Class_Day{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        //System.out.println("Enter the name of Breakup Girl");
        System.out.println("Enter the Name of Girl");
        String name2 = input.next();
        AvinashPandey a1 = new AvinashPandey(name2);
        a1.getinformation();
        //AbhishekYadav a1 = new AbhishekYadav(name2);
        //a1.getinformation();
    }
}