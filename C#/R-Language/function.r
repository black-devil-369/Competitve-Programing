evenOdd = function(x){
    if(x%%2==0)
       return ("Even")
    else
    return ("Odd")
}
divisibleby5 <- function(n){
    if(n%%5==0){
        return("n is divisible by 5")
    }
    else{
        return("n is not divisible by 5")
    }

}
print(evenOdd(5))
print(evenOdd(6))
divisibleby5(100)
divisibleby5(53)