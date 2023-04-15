#include<bits/stdc++.h>
using namespace std; 
int main(){
    int *foo;
    foo = new int[5];
    for(int i=1; i<5; i++){
        cin>>foo[i];
    }
    for(int i=1; i<5; i++){
        cout<<foo[i]<<" ";
    }
    cout<<endl;
    return 0;
}