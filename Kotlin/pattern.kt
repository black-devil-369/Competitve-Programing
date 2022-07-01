import java.util.Scanner
fun main(args: Array<String> ){
    for(i in 1..6){
        for(j in 1..i){
            print(" * ")
        }
        println(" ")
    }
    println("Another type of Pattern")
    for(i in 1..6){
        for(j in i..6){
            print(" * ")
        }
        println(" ")
    }
    println("Use of when loop ")
    var reader = Scanner(System.`in`)
    println("Enter the any LargerBody")
    var lb = reader.next()
    when(lb) {
        "Sun" -> println("Sun is Star")
        "Moon" -> println("Moon is Star")
        "Earth" -> println("Earth is planet")
    }
}