// using of super key
// it is used to access member of base class like(variable,method and constructor)
// if they are in same as nested class means( derived class and base class member are same)
class Father{
    String name = "Ajay Chauhan";
    void message(){
        System.out.println("I am father of Ajay Chauhan");
    }
}
class Mother extends Father{
    String name = "Jai Maa Bhavani";
    void message(){
        System.out.println("I am mother of Ajay Chauhan");
    }
    void display(){
        System.out.println(super.name);
        System.out.println(name);
        message();

        super.message();
    }
}
// super key is used for constructor
class Women{
    Women(){
        System.out.println("Hot Women");
    }
}
class Men extends Women{
    Men(){
        super();
        System.out.println("Hot Men");
    }
}
// Main class
class Keyword{
    public static void main(String[] args){
        Mother m1 = new Mother();
        // creating object for Men
        Men m = new Men();
        m1.display();
    }
}