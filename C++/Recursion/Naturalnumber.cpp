#include<iostream>
using namespace std;
// function for printing N natural number
void printN(int n)
{
    if(n>0){
        printN(n-1);
        cout<<n<<" ";
    }
}
// function for printing N natural number in Reverse ordered
void printNR(int n){
    if(n>0){
        cout<<n<<" ";
        printNR(n-1);
    }
}
// function for printing odd natural number
void printodd(int n)
{
    if(n>0){
        printodd(n-1);
        cout<<((2*n)-1)<<" ";
    }
}
// function for printing odd natural number in Reverse Ordered
void printoddR(int n)
{
    if(n>0){
        cout<<((2*n)-1)<<" ";
        printoddR(n-1);
    }
}
// fucntion for printing N Even natural number
void printEven(int n)
{
    if(n>0){
        printEven(n-1);
        cout<<(2*n)<<" ";
    }
}
// function for printing N even natural number in Reverse ordered
void printEvenR(int n)
{
    if(n>0){
        cout<<(2*n)<<" ";
        printEvenR(n-1);
    }
}
// function for printing square of  natural number
void printSquare(int n)
{
    if(n>0){
        printSquare(n-1);
        cout<<(n*n)<<" ";
    }
}
// function for printing square of n natural number in reverse ordered
void printSquareR(int n){
    if(n>0){
        cout<<(n*n)<<" ";
        printSquareR(n-1);
    }
}
// function for printing cube of n natural number 
void printcube(int n){
    if(n>0){
        printcube(n-1);
        cout<<(n*n*n)<<" ";
    }
}
void printcubeR(int n)
{
    if(n>0){
        cout<<(n*n*n)<<" ";
        printcubeR(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    printN(n);
    cout<<endl;
    cout<<"The N Natural number in Reverse Form"<<endl;
    printNR(n);
    cout<<endl;
    cout<<"The N odd Natural number"<<endl;
    printodd(n);
    cout<<endl;
    cout<<"The N odd Natural number in Reverse ordered"<<endl;
    printoddR(n);
    cout<<endl;
    cout<<"The N even Natural number"<<endl;
    printEven(n);
    cout<<endl;
    cout<<"The N even Natural number in Reverse Ordered"<<endl;
    printEvenR(n);
    cout<<endl;
    cout<<"The square of n natural number"<<endl;
    printSquare(n);
    cout<<endl;
    cout<<"The square of n natural number in reverse ordered"<<endl;
    printSquareR(n);
    cout<<endl;
    cout<<"The cube of n natural number"<<endl;
    printcube(n);
    cout<<endl;
    cout<<"The cube of n natural number in Reverse ordered"<<endl;
    printcubeR(n);
    cout<<endl;
    return 0;
}