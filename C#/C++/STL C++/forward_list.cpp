#include<iostream>
#include<forward_list>
// #include<bits/stdc++.h>
using namespace std;
int main(){
    //creating a forward_list
    // by using syntax like , forward_list<data_type>forward_list_name;
    forward_list<int>list1;
    //creating a second forward_list
    forward_list<int>second;
    // creating a third forward_list
    forward_list<int>third;
    // enter the element inside a forward_list by assign function used
    list1.assign({3,6,2,7,8});
    second.assign({90,36,73,25,34});
    third.assign({15,62,6,2,63,32});
    // creating a iterator for forward_list
    forward_list<int>::iterator it;
    cout<<"The Element of list1"<<endl;
    for(it =list1.begin(); it!=list1.end();++it){
        cout<<*it<<endl;
    }
    cout<<"The Element of second list"<<endl;
    for(it=second.begin();it!=second.end();++it){
        cout<<*it<<endl;
    }
    cout<<"The Element of Third list"<<endl;
    for(it=third.begin();it!=third.end();++it){
        cout<<*it<<endl;
    }
}

// some type of function is used to perform operation on list
//assign(),push_front(),emplace_front(), pop_front(),insert_after(),emplace_after()
//erase_after(),remove(),remove_if(),clear(),splice_after(),begin(),end(),cbegin(),cend(),
//before_begin(),cbefore_begin(),max_size(),size(),revese(),unique(),swap(),empty(),merge()
//sort(),clear()