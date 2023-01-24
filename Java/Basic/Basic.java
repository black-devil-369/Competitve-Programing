class Basic{
    // Data type in Java
    public static void main(String[] args){
        //boolean data type 
        // is used to store either true or fasle value
        // boolean keyword are used to declare bool value
        boolean y = true;
        boolean x = false;
        if(y == true){
            System.out.println("It is boolean true value");
        }
        if(x == false){
            System.out.println("It is boolean false value");
        }
        // byte data type
        // byte data type is usefull for saving memory in large  arrays
        // byte keyword is used to declare 
        byte c = 126;
       

        // Creating and initializing custom character
        char a = 'G';
 
        // Integer data type is generally
        // used for numeric values
        int i = 89;
 
        // use byte and short
        // if memory is a constraint
        byte b = 4;
 
        // this will give error as number is
        // larger than byte range
        // byte b1 = 7888888955;
 
        short s = 56;
 
        // this will give error as number is
        // larger than short range
        // short s1 = 87878787878;
 
        // by default fraction value
        // is double in java
        double d = 4.355453532;
 
        // for float use 'f' as suffix as standard
        float f = 4.7333434f;
       
          //need to hold big range of numbers then we need this data type
          long l = 12121;
        
        
        System.out.println(c);
        c++;
        System.out.println(c);
        c++;
        System.out.println(c);
        System.out.println("char value: "+a);
        System.out.println("Boolean value: " +b);
        System.out.println("Integers value : " +i);
        System.out.println("Short value: " +s);
        System.out.println("Long value : " +l);
        System.out.println("Float value : " +f);
        System.out.println("Double value : " +d);

    }
}