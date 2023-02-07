#include<stdio.h>
int main(){
    int var = 42;
    int *ptr = &var;
    // double pointer is used to store or print address of pointer
    int **pt = &ptr;
    printf("%d",var);
    printf("\n%d",ptr);
    printf("\n%d",pt);
    return 0;
}