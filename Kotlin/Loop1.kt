import java.util.Scanner
fun main(args: Array<String>){
   var names = arrayOf("Praveen","Gaurav","Akash","Sidhant","Abhi","Mayank")
    var index = 0
 
    while(index < names.size) {
        println(names[index])
        index++
    }
    for(i in 1..5){
        println("$i")
    }
    var reader = Scanner(System.`in`);
    println("Enter the Month Number");
    var monthofYear = reader.nextInt();
    var month = when(monthofYear){
        1-> "January"
        2-> "February"
        3->"March"
        4->"April"
        5->"May"
        6->"June"
        7->"July"
        8->"August"
        9->"September"
        10->"October"
        11->"November"
        12->"December"
        else -> {
            println("Not a month of year");
        }
    }
    println(month)

