import java.util.Scanner;
import java.util.Arrays;
public class TwoD{
    public static void main(String[] args){
        Scanner aj = new Scanner(System.in);
        System.out.println("Enter the size for Two Dimensinal Arrays: ");
        int n = aj.nextInt();
        int k = aj.nextInt();
        int[][]myarr = new int[n][k];
        System.out.println("Enter the element inside a arrays:");
        for(int i =0; i<n; i++){
            for(int j =0; j<k; j++){
                myarr[i][j] = aj.nextInt();
            }
        }
        System.out.println("Element Entered by you inside a two dimensional arrays: ");
        for(int i = 0; i<n; i++){
            for(int j= 0; i<k; j++){
                System.out.println(myarr[i][j]);
            }
        }

    }
}