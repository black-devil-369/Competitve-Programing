#include<bits/stdc++.h>
using namespace std;
// funtion derived out from the main funtioncin
// return_type function_name(Parameter....){function body}
void sumarea(int a,int b){
    int c = a+b;
    cout<<c<<endl;
}
int max(int x,int y){ // retrun type is integers
    if(x>y){
        return x;
    }
    else{
        return y;
    } 
}
int sum(int x,int y,int z=0 ,int c=0){
    return(x+y+z+c);
}
//int sum(int x,int y,float z,float c){
   // return(x+y+z+c);
//}
int main(){
    int z = max(6,4);// calling a funtion in assing in z integers
    cout<<z<<endl;// output of calling
    sumarea(5,6);
    cout<<"Fuction by deaulf arguemnts"<<endl;
    cout<<sum(56,34)<<endl;
    cout<<sum(36,44,74)<<endl;
    // calling a function by proviting value of all parameters
    cout<<"calling a fuction by providing all parameters value"<<endl;
    cout<<sum(90,32,63,74)<<endl;
   // cout<<"calling a fucntion by changing of different parameter data_type"<<endl;
    //cout<<sum(53,74,67.45,90.45);
    return 0;
}