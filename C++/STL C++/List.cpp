#include<iostream>
#include<iterator>
#include<list>
//#include<bits/stdc++.h>
using namespace std;
// now pring element inside a list by help of function creation
void showlist(list<int>l){
    // creating a iterator for list
    cout<<"Printing the list "<<endl;
    list<int>::iterator it;
    for(it = l.begin();it!=l.end();++it){
        cout<<*it<<endl;
    }
}
int main(){
    list<int>list1;
    for(int i=1;i<10;++i){
        list1.push_back(i*2);
    }
    cout<<"The element inside a list"<<endl;
    for(auto &k:list1){
        cout<<k<<endl;
    }
    cout<<"By help of iterator"<<endl;
    showlist(list1);
}