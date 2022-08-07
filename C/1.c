#include<stdio.h>
int main(){
    int n;
    printf("Enter the number for star printing:\n");
    scanf("%i",&n);
    printf("Printed star according by you enter number \n");
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            printf(" * ");
        }
        printf("\n");
    }
    printf(" \n");
    printf("Printing a star in another form\n");
    for(int i = 1; i<=n; i++){
        for(int j =n; j>=i; j--){
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n");
    printf("Printing a number in triange form\n");
    for(int i = 1; i<=n; i++){
        for(int j = n; j>=i; j--){
            printf(" %i ", j);
        }
        printf("\n");
    }
    return 0;
}