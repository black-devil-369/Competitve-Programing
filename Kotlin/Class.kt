class employee{
    var name:String = " "; 
    var age:Int = 0;
    var gender:Char = 'M';
    var salary: Double = 453.toDouble();
    // Function Declaration Way
    fun insertValues(n:String, a:Int, g:Char, s: Double){
        name = n ; 
        age = a ;
        gender = g;
        salary = s;
        println("Name of the employee:$name");
        println("Age of the employee: $age");
        println("Gender: $gender");
        println("Salray of the employee: $salary");
    }
    fun insertName(n:String){
        this.name = n;
    }
}
fun laal(){
    var obj = employee();
    var obj2 = employee();
    obj.insertValues("Ajay Chauhan",16,'M',53465.00)
    obj2.insertName("Jai Bhavani")
    println("Name of hte new employee:${obj2.name}")
    println(obj.age)
}
class ajay{
    var name: String = " ";
    var age : Double = 0.0
    var height: Float = 0.toFloat();
    fun loop(a:String, b:Float, c:Double){
        name = a;
        age  = c;
        height = b; 
        println("$name , $age , $height")
    }
}
class king{
    var a = "Jai Mata di";
    class queeen{
        var b = "Ajay Chauhan"
        fun functionQueen(s:String):String{
            var c = b.plus(s);
            return c;
        }
    }
}
fun main(args: Array<String>){
    var obj = ajay();
    var nested = king.queeen()
    var result = nested.functionQueen("Jai Kali Mata")
    println(result)
    obj.loop("Ajay Chauhan",5f, 23.34)
    laal()
}