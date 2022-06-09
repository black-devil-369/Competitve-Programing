#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the the size of vector"<<endl;
    cin>>n;
    vector<int>g1;
    for(int i=1;i<=n;i++){
        g1.push_back(i);
    }
    cout<<"Output of begin"<<endl;
    for(auto i=g1.begin();i!=g1.end();++i){
        cout<<*i<< " ";
    }
    cout<<" "<<endl;
    cout<<"Output of cbegin"<<endl;
    for(auto i= g1.cbegin(); i!=g1.cend();++i){
        cout<<*i<<" ";
    }
    cout<<" "<<endl;
    cout<<"Output of rbegin"<<endl;
    for(auto i = g1.rbegin();i!=g1.rend();++i){
        cout<<*i<<" ";
    }
    cout<<" "<<endl;
    cout<<"Output of crbegin"<<endl;
    for(auto i =g1.crbegin(); i!=g1.crend();++i){
        cout<<*i<<" ";
    }
    cout<<" "<<endl;
    cout<<"Size of Vector= "<<g1.size()<<endl;
    cout<<"Max-capicity of vector =" <<g1.capacity()<<endl;
    cout<<"Max-size of vector ="<<g1.max_size()<<endl;
    return 0;
    
}