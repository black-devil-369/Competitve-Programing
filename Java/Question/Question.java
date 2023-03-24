public class Question{
    public static void main(String[] args){
       // Scanner input = new Scanner(System.in);
       // int row = input.nextInt();
       // int col = input.nextInt();
       int row = 4;
       int col = 4;
        int [][]arr = new int[row][col];
        int value =1;
        for(int i =0;i<row;i++){
            for(int j=0;j<col;j++){
                arr[i][j]=value;
                value++;
            }
        }
        System.out.println("Printing the 2d Arrays");
        for(int i=1;i<=row;++i){
            for(int j=1;j<=col;++j){
                System.out.print(arr[i][j] + "");
            }
            System.out.println("");
        }
    }
}