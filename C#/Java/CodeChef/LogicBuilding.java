import java.util.Scanner;
//Driver Class Program;
class LogicBuilding{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the value for testcase");
        int testcase = input.nextInt();
        // using a loop for testcase perform
        for(int i=1;i<testcase; ++i){
            int a = input.nextInt();
            int c = input.nextInt();
            int B = (a+c)/2;
            if(a%2==0 && c%2==0){
                int b = (a+c)/2;
                System.out.println(b);
            }
            else if(a%2!=0 && c%2!=0){
                System.out.println(B);
            }
            else{
                System.out.println(-1);
            }
        }
    }
}