#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,p,q;
    vector<int>v1,v2;
    cout<<"Enter the size for v1 vector:"<<endl;
    cin>>n;
    cout<<"Enter the the size for v2 vector:"<<endl;
    cin>>m;
    cout<<"Enter the element for v1 vector:"<<endl;
    for(int i=1;i<=n;++i){
        cin>>p;
        v1.push_back(p);
    }
    cout<<"Element enter by you in the v1 vector is:"<<endl;
    for(auto &k:v1){
        cout<<k<<endl;
    }
    cout<<"Enter the element for v2 vector:"<<endl;
    for(int i=1;i<=m;++i){
        cin>>q;
        v1.push_back(p);
    }
    cout<<"Element enter by you in the v1 vector is:"<<endl;
    for(auto &k:v2){
        cout<<k<<endl;
    }
}