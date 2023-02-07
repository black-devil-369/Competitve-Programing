#include<stdio.h>
// union in c is used to declare a group of variable 
// if any change made in one variable then this change in another variable if they 
// are in same data type;
union num
{
    /* data */
    int x;
    int y;
    float c;
    float d;
};
int main(){
    union num n1;
    n1.x = 42;
    n1.y = 34;
    n1.c = 37;
    printf("%d %d %f %f",n1.x, n1.y,n1.c,n1.d);
}
