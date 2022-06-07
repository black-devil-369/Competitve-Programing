#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    int size[n];
    cout<<"Enter element of Array"<<endl;
    for(int i=0; i<n; i++){
        cin>>size[i];
    }
    cout<<"Element Entered by you in Arrays"<<endl;
    for(int i=0;i<n;i++){
        cout<<size[i]<<endl;
    }
    cout<<"The size of Arrays is"<<endl;
    cout<<sizeof(size)<<endl;
    cout<<"The Length of Elements of Arrays"<<endl;
    c = sizeof(size)/sizeof(int);
    cout<<c<<endl; 
}