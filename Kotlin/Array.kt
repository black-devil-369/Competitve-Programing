fun main(){
    println("First Type of Array creating method")
    val arrayname = arrayOf(1,2,4,63,64,74); // implicit type of array
    for(i in 0..arrayname.size-1){
        println(""+arrayname[i])
    }
    println("Second type array Creating method")
    val myarrayname = arrayOf<Int>(3,5,2,6,1,7) // Explicit type of Array
    for(i in 0..myarrayname.size-1){
        println(" "+myarrayname[i])
    }
    println("Element of arrayname modified at a specfic index")
    arrayname.set(0, 100); // used for modified array at a specfic index
    println(arrayname.get(0)) // used to access element of array at given index

    println("Element of arrayname Array after modified")

    for(i in arrayname.indices){
        println(arrayname[i])
    }

}