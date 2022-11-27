#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
int main(){
    int i,j,smallest;
    int lenght[5] = {6,1,7,4,2};
    int n = sizeof(lenght)/sizeof(int);
    for(j = 1;i<=n-1;j++){
         smallest = j;
    }
    for(i=j+1;i<=n-1;i++){
        if(lenght[i]<lenght[smallest]){
            i = smallest;
        }
    }
    swap(lenght[j],lenght[smallest]);
    for(i =1;i<=n-1;i++){
        cout<<lenght[i]<<" ";
    }
    cout<<"Code:"<<endl;
    cout<<endl;
    return 0; 
}