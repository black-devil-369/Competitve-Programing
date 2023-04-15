#include<stdio.h>
struct Person
{
    /* data */
    char name;
    int age;
    int height;
};
int main(){
    struct  Person p1;
    p1.name = 'A';
    p1.age = 32;
    p1.height = 5;
    printf("%c",p1.name);
    printf("\n%d",p1.age);
    printf("\n%d",p1.height);
}
