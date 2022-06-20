#include<bits/stdc++.h>
#include<list> // for list Function
using namespace std;
int main(){
    list<int>l;
    list<int>k;
    int a,b;
    cout<<"Enter the size of list"<<endl;
    cin>>a;
    cout<<"Enter the Element inside a List"<<endl;
    for(int i = 1; i<=a; i++){
        cin>>b;
        l.emplace_back(b);
    }
    cout<<"Element enter by you in the list"<<endl;
    for(auto &s:l){
        cout<<s<<" ";
    }
    cout<<endl;
     cout<<"Enter the Element inside a Second List"<<endl;
    for(int i = 1; i<=a; i++){
        cin>>b;
        k.emplace_back(b);
    }
    cout<<"Element enter by you in the Second list"<<endl;
    for(auto &p:k){
        cout<<p<<" ";
    }
    cout<<endl;
    k.merge(l);
    cout<<"Element of second list after merge"<<endl;
    for(auto &x:k){
        cout<<x<<" ";
    }
    cout<<endl;
    l.swap(k);
    cout<<"Element of first list after swapping"<<endl;
    for(auto &y:l)
        cout<<y<<" ";
    cout<<endl;

    cout<<"Element of second list after swapping"<<endl;
    for(auto &z:k)
        cout<<z<<" ";
    cout<<endl;
}