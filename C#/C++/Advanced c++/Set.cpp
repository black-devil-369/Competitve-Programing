#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    set<int>myset;
    int a,b,sum=0;
    cout<<"Enter the size of set"<<endl;
    cin>>a;
    cout<<"Enter the Elements inside a set"<<endl;
    for(int i = 1; i<=a; i++){
        cin>>b;
        myset.insert(b);
    }
    cout<<"Element Enter by you inside a set"<<endl;
    for(const auto &j : myset){
        cout<<j<<endl;
    }
    cout<<"Sum of Elements inside a set"<<endl;
    for(const auto &k : myset){
        sum = sum + k;
    }
    cout<<sum<<endl;
}