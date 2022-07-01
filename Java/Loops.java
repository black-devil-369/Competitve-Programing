public class Loops{
    public static void main(String[] args){
        int a = 1;
        // if condition
        if(a<5){
            System.out.println("A is less than by give coditonal number");
        }
        System.out.println("Yes!");

        // if-else Conditional
        float f = 10;
        if(f>15){
            System.out.println("The give number is Greater than from the condtional number");
        }
        else
        System.out.println("NOT! , Now it is Less than from give condtional number");
        // if-else ladder conditional

        int b = 32;
        if(b<32)
           System.out.println("It is Less than or Equal to the give number");
        else if(b<42)
                System.out.println("It is Less than from give conditional number");
        else
            System.out.println("Jai Bhavani");

        // Nested if-else conditional statements

        int c = 3;
        if(c<=6){
            if(c==3){
                System.out.println("Hello,Ajay Chauhan");
            }
        }
        else
        System.out.println("Jai Bhavani");
        

    }
}