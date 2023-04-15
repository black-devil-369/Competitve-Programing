#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int a,b;
    cout<<"Enter the size of vector"<<endl;
    cin>>a;
    cout<<"Enter the Element inside a vector"<<endl;
    for(int i = 0; i<a; i++){
        cin>>b;
        v.push_back(b);
    }
    cout<<"Element Enter by you inside a vector"<<endl;
    for(auto &x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    sort(v.begin(), v.end());
    cout<<"Sorted Vector"<<endl;
    for( auto &k:v){
        cout<<k<<" ";
    }
    cout<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
}