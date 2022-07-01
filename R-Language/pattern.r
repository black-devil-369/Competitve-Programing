for (i in 1:6){
    for(j in 1:i){
        cat(" * ")
    }
    message(" ")
}
message("Print a Pattern in another Form")
for(i in 1:6){
    for(j in i:6){
        cat(" * ")
    }
    message(" ")
}
#while loop
x<-1
while(x<=10){
    cat(" ",x)
    x = x+1
}
#repeated loop
y<-1
repeat{
    message(y," ")
    y = y+1
    if(y==5)
    break
}