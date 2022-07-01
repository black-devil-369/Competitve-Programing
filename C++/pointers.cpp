#include<bits/stdc++.h>
using namespace std;
void fun(int& x){
    x = 23;
}
int main(){
    int x = 343;
    cout<<"The value of another x before fun funtion is call= "<<x<<endl;
     fun(x);
    cout<<"The value of x is:"<<x<<endl;
    return 0;
}