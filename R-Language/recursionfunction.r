rec_fac <- function(x){
    if(x==0 || x==1){
        return (1)
    }
    else{
        return(x*rec_fac(x-1))
    }
}
z<- c(5)
z1<-as.character(z)
print(z1)
x<-c('1', '2', '3')
print(x)
print(typeof(x))
y<-as.numeric(x)
print(y)
print(typeof(y))
rec_fac(5)