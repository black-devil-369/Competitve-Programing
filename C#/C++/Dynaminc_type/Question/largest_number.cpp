#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"A is greater than B and C"<<endl;
        }
        else{
            cout<<"C is greater"<<endl;
        }
    }
    else{
        cout<<"B is greater "<<endl;
    }
    return 0;
}
