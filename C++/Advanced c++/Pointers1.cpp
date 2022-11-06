#include<bits/stdc++.h>
using namespace std;
void pointers(int *c){
    *c = 34;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int d = 30;
    pointers(&d);
    cout<<d;
    int a;
    int *b = &a;
    cin>>a;
    cout<<&a<<endl;
    cout<<*b<<endl;
    return 0;   
}