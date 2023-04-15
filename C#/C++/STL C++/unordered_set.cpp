#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>un_s1;
    int i,k;
    cout<<"Enter the elment for unordered_set"<<endl;
    for(i=0;i<5;++i){
        cin>>k;
        un_s1.insert(k);
    }
    cout<<"Output of unordered_set "<<endl;
    for(auto &j:un_s1){
        cout<<j<<endl;
    }
}