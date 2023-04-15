import java.util.Queue;
import java.util.LinkedList;
public class Jqueue{
    public static void main(String[] args){
        Queue<String> queue = new LinkedList<String>();
        // Queue = FIFO(First In First Out) data Structure
        // A collection designed for holding elements prior to processing 
        // Linear data structure
        // offer(): Method is used to add Elements inside a queue
        // poll(): Method is used to remove Eleents from a queue
        queue.offer("Ajay Chauhan");
        queue.offer("Jai Bhavani");
        queue.offer("Apple");
        queue.offer("Orange");
        queue.offer("Juice");
        System.out.println(queue);
        queue.poll();
        System.out.println(queue);

    }
}