#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size for Arrays"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the Elment inside an Arrays"<<endl;
    for(int i=0;i<n; ++i){
        cin>>a[i];
    }
    int count1 = a[0];
    cout<<"The small elment inside an arrays"<<endl;
    for(int i=0;i<n;++i){
        if(a[i]<count1){
            count1 = a[i];
        }
    }
    cout<<count1<<endl;
    cout<<"The large elemtn inside an arrays"<<endl;
    for(int i=0; i<n;++i){
        if(a[i]>count1){
            count1=a[i];
        }
    }
    cout<<count1<<endl;
    return 0;
}