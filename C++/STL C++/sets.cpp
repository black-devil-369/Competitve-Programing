#include<iostream>
#include<set>
using namespace std;
int main(){
    // declaring a set StL .... set<data_type>set_name 
    set<int>s1;
    set<int,greater<int>>s2; // sorted an element in decending ordered
    set<int>::iterator it;
    s1.insert(4);
    s1.insert(2);
    cout<<"Enter the elment for s1 set"<<endl;
    for(int i=0;i<6;++i){
        int t;
        cin>>t;
        s1.insert(t);
    }
    // for set s2;
    cout<<"Enter the elments for s2 set"<<endl;
    for(int i=0;i<5;++i){
        int t;
        cin>>t;
        s2.insert(t);
    }
    // printing the elment of s1 in ascending ordered
    cout<<"Output of set elements in asending ordered"<<endl;
    for(it = s1.begin(); it!=s1.end();++it){
        cout<<*it<<endl;
    }
    cout<<endl;
    // printing the element of s2 in descending ordered
    cout<<"Output of set elments in desending ordered"<<endl;
    for(it = s2.begin(); it!=s2.end();++it){
        cout<<*it<<endl;
    }
}