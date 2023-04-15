using System;
using System.IO.Arrays;
class Stack:Array{
    public Stack(int cap):base(cap){

    }
    public void push(int data){
        append(count()-1);
    }
    public int peek(){
        if(!isEmpty()){
            return get(count()-1);
        }
    }
    public void pop(){
        if(isEmpty()){
            Console.WriteLine("Stack is Empty");
        }
        else{
            deleteAtindex(count()-1);
        }
    }
}
// Deriver Program
class Stackarray{
    public static void Main(string[] args){
        Stack s = new Stack(5);
        s.push(26);
        s.push(25);
        s.push(63);
        s.push(97);
    }
}