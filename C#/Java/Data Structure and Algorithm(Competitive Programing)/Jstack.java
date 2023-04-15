import java.util.Stack;
public class Jstack{

     public static void main(String []args){
         Stack<String> stack = new Stack<String>();
         // Stack : LIFO(Last in First Out) data Structure
         // push(): Method is used to add Element in a stack
         // pop() : Mehtod is used to remove Element from a stack  
        stack.push("ajay chauhan");
        stack.push("Jai Bhavani");
        stack.push("Apple");
        stack.push("Orange");
        System.out.println(stack);

        stack.pop();
        System.out.println(stack);
     }
}