import java.util.Scanner
fun main(){
    println("Enter your number by help of Readline() funtion")
    var a = readLine()
    println("Number Entered by you from the keyboard")
    println(a)

    //println("Enter your number by help of Scanner method")
    //var number1 = Scanner(System.`in`)
   // println(number1)
    println("Enter the number inside a variable")
    var b = readLine()!!
    println(b)
    if(a==b){
        println("Hello World")
    }
    else{
        println("Not!")
    }
}