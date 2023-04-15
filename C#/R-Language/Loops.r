x <- 1:10
for (i in x){
    if (i==6){
        print(paste("Coming out from the loop",i))
        break
    }
    print(paste("Values are:",i))
}
x<-1
while(x<10){
    print(x)
    if(x==7){
        break
    }
    x=x+1
}
y<-1:10
for(i in y){
    if (i==6){
        print(paste("Skipping from loop when i:",i))
        next
    }
    print(paste("Value are:",i))
}

