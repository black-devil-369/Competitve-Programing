import java.util.Scanner;
class Ajay{
   // public: 
    void loop(){
        Scanner b = new Scanner(System.in);
        int c = b.nextInt();
        if(c <10){
            System.out.println("Program is good in way");
        }
        else{
            System.out.println("NOT! Now");
        }
    }
}
class Practice{
    public static void main(String[] args){
        //Scanner b = new Scanner(System.in);
        //int x = b.nextInt();
        //for(int i=1;i<=x;i++){
            //for(int j=i;j>=1;j--){
               // System.out.print(" * ");
           // }
            //System.out.println("");
       // }
       Ajay a1 = new Ajay();
       a1.loop();
    }
}