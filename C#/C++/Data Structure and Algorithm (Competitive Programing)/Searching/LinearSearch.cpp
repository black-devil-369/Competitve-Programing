#include<iostream>
using namespace std;
int main(){
    int n,item;
    cout<<"Enter the size for arrays"<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter the element inside a Arrays"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<endl;
    cout<<"Enter the element for search inside a given array element"<<endl;
    cin>>item;
    for(int i=0;i<n;i++){
        if(A[i]==item){
            cout<<i<<endl;
        }
    }
    return -1;
}