#include<iostream>
using namespace std;
// fuction for printing sum of n natural number
int sumN(int n)
{
    if(n==1){
        return 1;
    }
    else{
        return (n+sumN(n-1));
    }
}
// recursive function for sum of n odd natural number
int sumodd(int n)
{
    if(n==1){
        return 1;
    }
    else{
        return 2*n-1 + sumodd(n-1);
    }
}
// recursive function for sum of n even natural number
int sumEven(int n)
{
    if(n==1){
        return 2;
    }
    else{
        return (2*n)+sumEven(n-1);
    }
}
int sumsquare(int n)
{
    if(n==1){
        return 1;
    }
    return (n*n)+sumsquare(n-1);
}
// recursive function program for n natural number
int factorial(int n)
{
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    /*int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    */
    cout<<sumN(7);
    cout<<endl;
    cout<<sumodd(7);
    cout<<endl;
    cout<<sumEven(7);
    cout<<endl;
    cout<<sumsquare(7);
    cout<<endl;
    cout<<factorial(3);
    return 0;
}