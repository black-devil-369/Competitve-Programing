#include<bits/stdc++.h>
using namespace std;
class sum{
    private:
    int roll_no;
    char name[10];
    int age;
    public:
    sum(int,char[],int);
    void displaySum();
};
sum::sum(int a,char n[],int b){
    roll_no = a;
    strcpy(name,n);
    age = b;
}
void sum::displaySum(){
    cout<<roll_no<<"\t"<<name<<"\t"<<age;
}
int main(){
    sum s1(534,"A",34);
    s1.displaySum();
    return 0;
}