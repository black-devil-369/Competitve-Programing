#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a ,b,sum =0;
    cin>>a;
    vector<int>vec;
    for(int i = 1; i<=a; i++){
        cin>>b;
        vec.push_back(b);
    }
    cout<<"Elements enter by inside a vector"<<endl;
    for(auto &k :vec){
        cout<<k<<endl;
    }
    cout<<"The sum of Elements inside a vector"<<endl;
    for(const auto &c: vec){
        sum+=c;
    }
    cout<<sum<<endl;
    return 0;

}