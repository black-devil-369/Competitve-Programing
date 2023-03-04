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
    std::ios_base::sync_with_stdio(NULL);
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
    // using all function which is build for list
    //back(),front(),push_back,push_front,pop_front,pop_back,list::begin(),list::end()
    //list::rbegin(),list::rend(),list cbegin(),list cend(),list crbegin(),list crend()
    //empty, insert(),erase(),assign(),remove(),reverse(),resize(),size(),sort(),max_size()
    //unique(),list::emplace_front() and list::emplace_back(),list::clear(),list::swap(), list splice(), list merge(), 
    // list emplace;
}