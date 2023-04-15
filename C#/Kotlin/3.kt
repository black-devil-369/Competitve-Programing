fun details(name:String, age:Int, height:Int){
    println("The Name of Students is: $name")
    println("The Age of Students is: $age")
    println("The Height of Students is: $height")

}
fun pattern(a:Int){
    for(i in 1..a){
        for(j in 1..i){
            print(" * ")
        }
        println(" ")
    }
    for(i in 1..a){
        for(j in i..a){
            print(" * ")
        }
        println(" ")
    }
}
fun main(){
    details("Ajay Chauhan", 20, 6)
    pattern(5)
}