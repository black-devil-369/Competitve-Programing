using System;

class Node<T> {
    public T data;
    public Node<T> next;

    public Node(T d) {
        data = d;
        next = null;
    }
}

class LinkedList<T> {
    Node<T> head;

    public void AddNode(T data) {
        Node<T> newNode = new Node<T>(data);

        if (head == null) {
            head = newNode;
        }
        else {
            Node<T> current = head;
            while (current.next != null) {
                current = current.next;
            }
            current.next = newNode;
        }
    }

    public void PrintList() {
        Node<T> current = head;
        while (current != null) {
            Console.Write(current.data + " ");
            current = current.next;
        }
        Console.WriteLine();
    }
}

class Program {
    static void Main(string[] args) {
        LinkedList<int> myList = new LinkedList<int>();

        myList.AddNode(1);
        myList.AddNode(2);
        myList.AddNode(3);

        myList.PrintList();

        LinkedList<string> myOtherList = new LinkedList<string>();

        myOtherList.AddNode("Hello");
        myOtherList.AddNode("World");
        myOtherList.AddNode("!");

        myOtherList.PrintList();
    }
}
//using System;
// LinkedList program using generic code
public class LinkedListNode<T>
{
    public T Value { get; set; }
    public LinkedListNode<T> Next { get; set; }

    public LinkedListNode(T value)
    {
        Value = value;
        Next = null;
    }
}

public class LinkedList<T>
{
    private LinkedListNode<T> head;

    public void AddFirst(T value)
    {
        var node = new LinkedListNode<T>(value);
        node.Next = head;
        head = node;
    }

    public void AddLast(T value)
    {
        var node = new LinkedListNode<T>(value);
        if (head == null)
        {
            head = node;
        }
        else
        {
            var current = head;
            while (current.Next != null)
            {
                current = current.Next;
            }
            current.Next = node;
        }
    }

    public bool Remove(T value)
    {
        if (head == null)
        {
            return false;
        }

        if (head.Value.Equals(value))
        {
            head = head.Next;
            return true;
        }

        var current = head;
        while (current.Next != null)
        {
            if (current.Next.Value.Equals(value))
            {
                current.Next = current.Next.Next;
                return true;
            }
            current = current.Next;
        }

        return false;
    }

    public bool Contains(T value)
    {
        var current = head;
        while (current != null)
        {
            if (current.Value.Equals(value))
            {
                return true;
            }
            current = current.Next;
        }

        return false;
    }

    public void Print()
    {
        var current = head;
        while (current != null)
        {
            Console.Write(current.Value + " ");
            current = current.Next;
        }
        Console.WriteLine();
    }
}

public class Program
{
    public static void Main()
    {
        var list = new LinkedList<int>();
        list.AddFirst(3);
        list.AddFirst(2);
        list.AddFirst(1);
        list.AddLast(4);
        list.AddLast(5);
        list.Print(); // Output: 1 2 3 4 5

        list.Remove(3);
        list.Print(); // Output: 1 2 4 5

        Console.WriteLine(list.Contains(4)); // Output: True
        Console.WriteLine(list.Contains(6)); // Output: False
    }
}