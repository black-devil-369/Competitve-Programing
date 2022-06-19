fun main(){
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
}