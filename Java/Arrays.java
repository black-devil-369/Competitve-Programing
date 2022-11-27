import java.util.Scanner;
class Arrays{
    public static void main(String[] args){
        Scanner sr = new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n = sr.nextInt();
        int[] ajay;// Declared of Array and Onedimensional arrays
       // char jai[];//    ''''
        ajay = new int[n];// Allocating memory to array
        //jai = new char[4]; // ""
       // int[] loop = new int[9]; //  Declared of array and Allocating memory to array in one line
        //float portal[] = new float[3]; // "" 
        System.out.println("Enter the Elment inside a arrays: ");
        for(int i =0; i<ajay.length; i++){
            ajay[i] = sr.nextInt();
        }
        System.out.println("Elements of Arrays Entered by you");
        for(int i=0; i<ajay.length; i++){
            System.out.println(ajay[i]);
        }
        System.out.println("Enter the size for second dimesion arrays");
        int a = sr.nextInt();
        System.out.println("Enter the elment inside TwoDimensional Arrays");
        int[] jai = new int[n][a];
        for(int i =0; i<jai.length; i++){
            for(int j =0; j<jai.length; j++){
                jai[i][j]= sr.nextInt();
            }
        }
        System.out.println("Element Entered by you inside a Twodimensional arrays");
        for(int i =0; i<jai.length; i++){
            for(int j =0; j<jai.length; j++){
                System.out.println(jai[i][j]+" ");
            }
        }
    }
}