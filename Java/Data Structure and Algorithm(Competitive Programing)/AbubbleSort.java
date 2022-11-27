//import java.util.Arrays;
public class AbubbleSort{
    public static void main(String[] args){
        int[] array = {5,2,6,4,1,7,3,9};
        System.out.println("Sorted in Descending Order");
        bubblesort(array);
        for(int i:array){
            System.out.print(i + " ");
        }
        System.out.println("Sorted in Accending Order");
        bubblesort1(array);
        for(int i:array){
            System.out.print(i+ " ");
        }
    }
    public static void bubblesort(int array[]){
        for(int i = 0; i<array.length-1; i++){
            for(int j =0; j<array.length-1; j++){
                if(array[j]<array[j+1]){
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1]= temp;
                }
            }
        }
    }
    public static void bubblesort1(int array[]){
        for(int i = 0; i<array.length-1; i++){
            for(int j =0; j<array.length-1; j++){
                if(array[j]>array[j+1]){
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1]= temp;
                }
            }
        }
    }
}