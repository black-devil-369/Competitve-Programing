import java.util.Scanner;
class Q2{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int [] array = new int[n];
        for(int i=0;i<n;++i){
            array[i]= input.nextInt();
        }
        int sum = 0;
        for(int i=0;i<n;++i){
            sum+=array[i];
        }
        System.out.println("Sum is:" +sum);
    }
}